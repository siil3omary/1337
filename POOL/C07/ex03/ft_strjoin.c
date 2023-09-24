/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 10:12:02 by aelomari          #+#    #+#             */
/*   Updated: 2023/09/05 10:40:11 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	slen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	sslen(char **str, int size)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		j = 0;
		while (str[i][j])
		{
			j++;
			len++;
		}
		i++;
	}
	return (len);
}

void	concatena(char *tab, int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			tab[k++] = strs[i][j++];
		j = 0;
		if (i < size - 1)
			while (sep[j])
				tab[k++] = sep[j++];
		i++;
	}
	tab[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*tab;

	if (size == 0)
	{
		tab = (char *)malloc(1 * sizeof(char));
		tab[0] = '\0';
		return (tab);
	}
	i = ((sslen(strs, size) + (slen(sep) * (size - 1))) + 1);
	tab = (char *)malloc(i * sizeof(char));
	if (!tab)
		return (NULL);
	concatena(tab, size, strs, sep);
	return (tab);
}
