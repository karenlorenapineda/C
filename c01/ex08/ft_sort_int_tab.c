/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpineda- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:27:08 by kpineda-          #+#    #+#             */
/*   Updated: 2024/08/17 16:51:55 by kpineda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[0] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
			}
			i++;
		}
		size--;
	}
}
/*
int	main()
{
	int	tab[6] = {3, 4, 9, 1, 7, 8};
	int	size = 6;

	ft_sort_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d, %d", 
	tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
	return (0);
}*/
