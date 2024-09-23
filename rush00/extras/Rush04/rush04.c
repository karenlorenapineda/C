/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-bele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 18:22:53 by ana-bele          #+#    #+#             */
/*   Updated: 2024/08/11 21:26:00 by kpineda-         ###   ########.fr       */
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
				ft_putchar('A');
			else if (row == x && col == y && row != 1 && col != 1)
				ft_putchar('A');
			else if ((row == x && col == 1) || (row == 1 && col == y))
				ft_putchar('C');
			else if (row != 1 && col != 1 && col != y && row != x)
				ft_putchar(' ');
			else
				ft_putchar('B');
		}
		ft_putchar('\n');
	}
}
