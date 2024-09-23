/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcuesta- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 17:21:16 by mcuesta-          #+#    #+#             */
/*   Updated: 2024/08/11 20:51:22 by kpineda-         ###   ########.fr       */
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
			if ((row == 1 && col == 1) || (row == x && col == y))
				ft_putchar('o');
			else if ((row == x && col == 1) || (row == 1 && col == y))
				ft_putchar('o');
			else if ((col >= 1 && col <= y) && (row == 1 || row == x))
				ft_putchar('|');
			else if (row != 1 && col != 1 && col != y && row != x)
				ft_putchar(' ');
			else
				ft_putchar('-');
		}
		ft_putchar('\n');
	}
}
