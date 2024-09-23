/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpineda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:30:49 by kpineda-          #+#    #+#             */
/*   Updated: 2024/08/15 13:38:29 by kpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main()
{

	printf("%d", ft_str_is_uppercase("IHVIFDHIBV"));
	printf("\n%d", ft_str_is_uppercase(""));
	printf("\n%d", ft_str_is_uppercase("DFSDFSjjsjgjkfhgs"));
	printf("\n%d", ft_str_is_uppercase("KLJLS4654"));
	printf("\n%d", ft_str_is_uppercase("FDSFS$SDGSFD"));
}
*/
