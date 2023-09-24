/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 00:48:48 by aelomari          #+#    #+#             */
/*   Updated: 2023/08/31 01:46:26 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	tab = malloc((max - min) * sizeof(int));
	if (min >= max)
		return (NULL);
	while (min < max)
	{
		tab[i] = min++;
		i++;
	}
	return (tab);
}
