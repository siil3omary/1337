/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:16:03 by aelomari          #+#    #+#             */
/*   Updated: 2023/08/28 20:47:30 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	skip(int i, char *str)
{
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int				i;
	int				sign;
	unsigned int	result;

	i = 0;
	sign = 1;
	result = 0;
	i = skip(i, str);
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = sign * -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}
