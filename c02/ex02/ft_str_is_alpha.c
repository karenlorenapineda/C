/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpineda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 12:27:23 by kpineda-          #+#    #+#             */
/*   Updated: 2024/08/15 13:08:53 by kpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90)
			|| (str[i] >= 97 && str[i] <= 122))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main()
{
	printf("%d", ft_str_is_alpha("HKjkdhdaHBJB"));
	printf("\n%d", ft_str_is_alpha(""));
	printf("\n%d", ft_str_is_alpha("hvjfbvdYdgbNNFSD67csdc"));
	printf("\n%d", ft_str_is_alpha("hvjfbvdYdg$bNNFScsdc"));
}*/
