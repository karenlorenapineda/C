/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:05:57 by marvin            #+#    #+#             */
/*   Updated: 2024/09/24 18:05:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	char	a;

	a = c;
	i = ft_strlen(s);
	if (a == 0)
		return ((char *) &s[i]);
	while (i >= 0)
	{
		if (s[i] == a)
			return ((char *) &s[i]);
		i--;
	}
	return (0);
}