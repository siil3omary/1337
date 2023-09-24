/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 21:00:48 by aelomari          #+#    #+#             */
/*   Updated: 2023/09/03 18:32:12 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	check(int i, char *str)
{
	while (str[i])
	{
		if (str[i - 1] && !((str[i - 1] >= 'A' && str[i - 1] <= 'Z') || (str[i
						- 1] >= 'a' && str[i - 1] <= 'z') || (str[i - 1] >= '0'
					&& str[i - 1] <= '9')))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
		}
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	check(i, str);
	return (str);
}
