/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 01:03:16 by marvin            #+#    #+#             */
/*   Updated: 2024/09/27 01:03:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	new = (char *)malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new)
		return (NULL);
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		new[i] = s2[j];
		i++;
		j++;
	}
	new[i] = '\0';
	return (new);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Casos de prueba
    char *str1 = "Hola, ";
    char *str2 = "mundo!";
    char *result;

    // Prueba normal
    result = ft_strjoin(str1, str2);
    if (result) {
        printf("Resultado: %s\n", result);
        free(result); // Liberar la memoria asignada
    }

    // Prueba con cadenas vacías
    result = ft_strjoin("", "mundo!");
    if (result) {
        printf("Resultado con cadena vacía: %s\n", result);
        free(result);
    }

    result = ft_strjoin("Hola, ", "");
    if (result) {
        printf("Resultado con cadena vacía: %s\n", result);
        free(result);
    }

    // Prueba con ambas cadenas vacías
    result = ft_strjoin("", "");
    if (result) {
        printf("Resultado con ambas cadenas vacías: %s\n", result);
        free(result);
    }

    // Prueba con NULL
    result = ft_strjoin(NULL, "mundo!");
    if (!result) {
        printf("Resultado con s1 NULL: NULL\n");
    }

    result = ft_strjoin("Hola, ", NULL);
    if (!result) {
        printf("Resultado con s2 NULL: NULL\n");
    }

    return 0;
}
*/