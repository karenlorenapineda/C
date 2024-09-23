/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpineda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 22:11:46 by kpineda-          #+#    #+#             */
/*   Updated: 2024/09/23 22:20:42 by kpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
