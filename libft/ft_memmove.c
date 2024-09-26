/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:04:26 by marvin            #+#    #+#             */
/*   Updated: 2024/09/24 18:04:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t len)
{
    unsigned char   *d;
    unsigned char   *s;

    if (src == NULL && dest == NULL)
        return (dest);
    d = (unsigned char *)dest; //iguala punteros al valor de parametros
    s = (unsigned char *)src;
    if (d >= s)
    {
        while (len--) //tamaño de mi buffer sea distinto de 0
            d[len] = s[len] //copiar c/elemento a la inversa, evitar overlaping
    }
    else
        ft_memcpy(d, s, len); //copia todos los characters secuencialmente
    return (dest);
}