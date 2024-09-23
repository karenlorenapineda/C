/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpineda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 13:29:54 by kpineda-          #+#    #+#             */
/*   Updated: 2024/08/29 21:10:51 by kpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power > 1)
	{
		return (nb * (ft_recursive_power(nb, (power - 1))));
	}
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	return (i);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d", ft_recursive_power(9, 2));
}*/
