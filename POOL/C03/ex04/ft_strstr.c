/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 18:14:56 by aelomari          #+#    #+#             */
/*   Updated: 2023/09/03 02:30:16 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	tmp;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		tmp = i;
		while (str[i] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i - j]);
			j++;
			i++;
		}
		j = 0;
		i = tmp;
		i++;
	}
	return (0);
}
