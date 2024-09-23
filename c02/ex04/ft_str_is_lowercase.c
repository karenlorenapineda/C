/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpineda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:23:14 by kpineda-          #+#    #+#             */
/*   Updated: 2024/08/15 13:30:03 by kpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main()
{
	printf("%d", ft_str_is_lowercase("jjsjgjkfhgs"));
	printf("\n%d", ft_str_is_lowercase(""));
	printf("\n%d", ft_str_is_lowercase("jjsjJFDGHFgjkfhgs"));
	printf("\n%d", ft_str_is_lowercase("jjsjgjkf12151hgs"));
	printf("\n%d", ft_str_is_lowercase("jjsjgj$*kfhgs"));
}*/
