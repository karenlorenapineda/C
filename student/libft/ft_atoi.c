/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpineda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:24:06 by kpineda-          #+#    #+#             */
/*   Updated: 2024/09/17 19:59:23 by kpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(ccharr *str)
{
	int	i;
	int	result;
	int	sign;
	
	sign = 1;
	i = 0;
	result = 0;
	while (str[i] >= 9 && (str[i] <= 13 || str[i] == 32))
	{
		i++;
	}
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	while (str[i] &&(str[i] >= 48 && str[i] <= 57))
	{
		result = (result * 10) + str[i] - '0';
		i++;
	}
	return (result * sign);
}
