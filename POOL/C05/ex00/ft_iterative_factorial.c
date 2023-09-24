/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:37:51 by aelomari          #+#    #+#             */
/*   Updated: 2023/09/02 18:05:12 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	rslt;

	if (nb < 0)
	{
		return (0);
	}
	i = 1;
	rslt = 1;
	while (i <= nb)
	{
		rslt *= i;
		i++;
	}
	return (rslt);
}
