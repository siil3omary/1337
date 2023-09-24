/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:37:51 by aelomari          #+#    #+#             */
/*   Updated: 2023/09/02 18:05:07 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 0;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb != 0)
	{
		result = nb * ft_recursive_factorial(nb - 1);
	}
	return (result);
}
