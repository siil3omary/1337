/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:37:51 by aelomari          #+#    #+#             */
/*   Updated: 2023/09/02 23:58:20 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;
	int	j;
	int	found;

	j = nb;
	if (nb <= 2)
		return (2);
	while (1)
	{
		i = 2;
		found = 0;
		while (i * i <= j && i <= 46340)
		{
			if ((j % i) == 0)
			{
				found = 1;
				break ;
			}
			i++;
		}
		if (!found)
			return (j);
		j++;
	}
	return (1);
}
