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
        size_t  i;
        size_t  d;
        size_t  srclen;
        size_t  destlen;

        destlen = ft_strlen(dest);
        srclen = ft_strlen(src);
        if (!dest && size == 0)
                return (srclen);
        destlen = d;
        if (size <= destlen)
                return (size + srclen);
        i = 0;
        while (src[i] && d + 1 < size)
        {
          dest[d] = src[i];
          i++;
          d++;
        }
        dest[d] = '\0';
        return (destlen + srclen);
}
