/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:39:27 by marvin            #+#    #+#             */
/*   Updated: 2024/09/24 17:39:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char *s;
	size_t  i;

	i = 0;
	s = (unsigned char *)str;
	while (i < n)
	{
		s[i] = (unsigned char)c; //mi str en la posición i igual a c
		i++;
	}
	return(str);
}