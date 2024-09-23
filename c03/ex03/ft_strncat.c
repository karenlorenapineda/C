/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpineda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 17:44:55 by kpineda-          #+#    #+#             */
/*   Updated: 2024/08/21 13:20:43 by kpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
/*
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	j;
	unsigned int	i;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j] && nb > j)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
*/
int     main()
{
        char    src[] = "World";
        char    dest[] = "Hello ";
        printf("%s", strncat(dest, src, 5));
}
