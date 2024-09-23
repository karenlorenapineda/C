/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpineda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:10:21 by kpineda-          #+#    #+#             */
/*   Updated: 2024/08/15 13:19:18 by kpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main()
{
	printf("%d", ft_str_is_numeric("12134684"));
	printf("\n%d", ft_str_is_numeric(""));
	printf("\n%d", ft_str_is_numeric("12bgfbfD134684"));
	printf("\n%d", ft_str_is_numeric("12&%134684"));
}*/
