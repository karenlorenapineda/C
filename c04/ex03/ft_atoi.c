/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpineda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:55:07 by kpineda-          #+#    #+#             */
/*   Updated: 2024/08/26 18:03:54 by kpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_atoi(char *str)
{
	int	i;
	int	resultado;
	int	signo;

	signo = 1;
	i = 0;
	resultado = 0;
	while (str[i] >= 9 && (str[i] <= 13 || str[i] == 32))
	{
		i++;
	}
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			signo *= -1;
		i++;
	}
	while (str[i] && (str[i] >= 48 && str[i] <= 57))
	{
		resultado = (resultado * 10) + str[i] - '0';
		i++;
	}
	return (resultado * signo);
}
/*
int	main()
{
	char *str = "  ---+--+1234ab567";
	printf("%d", ft_atoi(str));
}*/
