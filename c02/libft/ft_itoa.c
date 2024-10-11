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

int	ft_len(int c)
{
	int	i;

	i = 1;
	if (c < 0)
		i++;
	while (c / 10 != 0)
	{
		i++;
		c /= 10;
	}
	return (i);
}

char	*ft_itoa(int c)
{
	char	*out;
	int		sign;
	int		len;

	sign = 0;
	len = ft_len(c);
	if (c == -2147483648)
		return (ft_strdup("-2147483648"));
	out = (char *)malloc(len * sizeof(char) + 1);
	if (!out)
		return (NULL);
	if (c < 0)
	{
		c = -c;
		sign = 1;
	}
	out[len] = '\0';
	while (len-- > 0)
	{
		out[len] = c % 10 + '0';
		c /= 10;
	}
	if (sign == 1)
		out[0] = '-';
	return (out);
}
/*
#include <stdio.h>

int main() {
    // Pruebas con diferentes números
    int test_numbers[] = {0, -12345, 12345, -255, 255, 1024, -1024};
    size_t num_tests = sizeof(test_numbers) / sizeof(test_numbers[0]);

    for (size_t i = 0; i < num_tests; i++) {
        char *result = ft_itoa(test_numbers[i]);
        if (result) {
            printf("El número %d como cadena es: %s\n", test_numbers[i], result);
            free(result); // Liberar la memoria asignada por ft_itoa
        } else {
            printf("Error al asignar memoria para el número %d\n", 
		
		test_numbers[i]);
        }
    }

    return 0;
}
*/