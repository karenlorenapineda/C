/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 00:37:26 by marvin            #+#    #+#             */
/*   Updated: 2024/09/27 00:37:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int	size;

	size = ft_strlen(s1);
	ptr = malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, s1, size);
	ptr[size] = '\0';
	return (ptr);
}