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

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t srclen;
	size_t destlen;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (srclen);
	if (size <= destlen)
		return (srclen += destlen); //lonigtud de origen + tamaño de buffer
	else
		srclen += destlen;
	while (src[i] && destlen < (size - 1) && dest != src)
	{
	  dest[destlen] = src[i];
	  i++;
	  destlen++;  
	} 
	dest[destlen] = '\0';
	return(srclen);
}