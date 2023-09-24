/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 22:32:30 by aelomari          #+#    #+#             */
/*   Updated: 2023/08/21 03:13:07 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printnm(int a, int b)
{
	ft_putchar((a / 10) + 48);
	ft_putchar((a % 10) + 48);
	ft_putchar(' ');
	ft_putchar((b / 10) + 48);
	ft_putchar((b % 10) + 48);
	if (a < 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		if (b > a)
		{
			while (b <= 99)
			{
				ft_printnm(a, b);
				b++;
			}
		}
		a++;
	}
}
