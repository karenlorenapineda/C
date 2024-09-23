/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpineda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 19:53:13 by kpineda-          #+#    #+#             */
/*   Updated: 2024/08/11 17:07:16 by kpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	row;
	int	col;

	if (x <= 0 || y <= 0)
		write(1, "No valido", 9);
	col = 0;
	while (col++ < y)
	{
		row = 0;
		while (row++ < x)
		{
			if (row == 1 && col == 1)
				ft_putchar('/');
			else if (row == x && col == y && row != 1 && col != 1)
				ft_putchar('/');
			else if ((row == x && col == 1) || (row == 1 && col == y))
				ft_putchar('\\');
			else if (row != 1 && col != 1 && col != y && row != x)
				ft_putchar(' ');
			else
				ft_putchar('*');
		}
		ft_putchar('\n');
	}
}
