/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:05:01 by marvin            #+#    #+#             */
/*   Updated: 2024/09/24 18:05:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;

	dest_len = ft_strlen(dest);
	i = 0;
	if (size <= dest_len)
		return (size + ft_strlen(src));
	j = dest_len;
	while (src[i] && j < size - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest_len + ft_strlen(src));
}
/*
#include <stdio.h>

int	main()
{
	char	dest[20] = "Hello,";
	char	src[] = "world";

	printf("%ld\n", ft_strlcat(dest, src, 9));
	printf("%s\n",dest);
}*/