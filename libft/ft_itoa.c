/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 01:05:15 by marvin            #+#    #+#             */
/*   Updated: 2024/09/27 01:05:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_char(char *s, unsigned int num, long int len)
{
	while (num > 0)
	{
		s[len--] = 48 + (num % 10);
		num /= 10;
	}
	return (s);
}

static long int	ft_len(int n)
{
	int	len;

	len = 0;
	while (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long int		len;
	char			*s;
	unsigned int	num;
	int				sign;

	len = ft_len(n);
	sign = 1;
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	s[len--] = '\0';
	if (n == 0)
		s[0] = '0';
	if (n < 0)
	{
		sign *= -1;
		num = n * (-1);
		s[0] = '-';
	}
	else
		num = n;
	s = ft_char(s, num, len);
	return (s);
}
