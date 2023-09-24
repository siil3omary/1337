/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:54:47 by aelomari          #+#    #+#             */
/*   Updated: 2023/08/28 21:46:32 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	skip(int i, char *base)
{
	if (base[i] == '+' || base[i] == '-' || base[i] < 32 || base[i] > 126)
	{
		return (0);
	}
	return (1);
}

int	checkbase(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		skip(i, base);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	if (i < 2)
	{
		return (0);
	}
	return (i);
}

void	recputnbr(unsigned int nbr, char *base, unsigned int len)
{
	if (nbr >= len)
		recputnbr(nbr / len, base, len);
	write(1, &base[nbr % len], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				len_base;
	unsigned int	nbrs;

	len_base = checkbase(base);
	if (len_base == 0)
	{
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbrs = -nbr;
	}
	else
	{
		nbrs = nbr;
	}
	recputnbr(nbrs, base, len_base);
}
