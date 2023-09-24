/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 02:00:32 by aelomari          #+#    #+#             */
/*   Updated: 2023/08/31 04:03:11 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max, int *size)
{
	int	*tab;
	int	i;

	*size = max - min;
	if (*size <= 0)
		return (NULL);
	tab = (int *)malloc(*size * sizeof(int));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < *size)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = ft_range(min, max, &size);
	if (*range == NULL)
		return (-1);
	return (size);
}
