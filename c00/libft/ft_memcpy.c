/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:54:14 by marvin            #+#    #+#             */
/*   Updated: 2024/09/24 17:54:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int    i;

	if (src == NULL && dest == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((char *)dest) [i] = ((const char *)src) [i];
		i++;
	}
	return (dest);
}