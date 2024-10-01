/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:04:47 by marvin            #+#    #+#             */
/*   Updated: 2024/09/24 18:04:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t ft_strlcpy(char *des, size_t size)
{
    size_t  i;
    size_t  len;

    len = ft_strlen(src);
    if (size < 1)
        return (len)
    i = 0;
    while (i < size - 1 && src[i])
    {
        des[i] = src[i];
        i++;
    }
    des[i] = '\0';
    return (len);
}