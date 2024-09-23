/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpineda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 22:15:33 by kpineda-          #+#    #+#             */
/*   Updated: 2024/09/23 22:20:01 by kpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}
