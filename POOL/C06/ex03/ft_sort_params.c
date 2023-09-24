/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 10:24:21 by aelomari          #+#    #+#             */
/*   Updated: 2023/08/30 14:08:15 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	strlen;

	strlen = 0;
	while (str[strlen])
	{
		write(1, &str[strlen], 1);
		strlen++;
	}
}

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac >= 2)
	{
		i = 1;
		while (i++ < ac)
		{
			j = i + 1;
			while (j++ < ac)
			{
				if (ft_strcmp(av[i], av[j]) > 0)
				{
					ft_swap(&av[i], &av[j]);
				}
			}
		}
		i = 1;
		while (i < ac)
		{
			ft_putstr(av[i++]);
			write(1, "\n", 1);
		}
	}
}
