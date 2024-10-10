/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 01:03:59 by marvin            #+#    #+#             */
/*   Updated: 2024/09/27 01:03:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*out;
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while (j > i && ft_strchr(set, s1[j - 1]))
		j--;
	len = j - i;
	out = (char *)malloc(sizeof(char) * len + 1);
	if (!out)
		return (NULL);
	ft_strlcpy(out, s1 + i, len + 1);
	return (out);
}
/*
#include <stdio.h>

int main(void)
{
    char *s1 = "   Hola mundo!   ";
    char *set = " ";
    char *result;

    // Primer caso de prueba: recortar espacios en blanco de ambos lados
    result = ft_strtrim(s1, set);
    if (result)
    {
        printf("Resultado de ft_strtrim: '%s'\n", result);
        free(result);
    }

    // Segundo caso de prueba: recortar caracteres específicos
    s1 = "---Hola mundo!---";
    set = "-";
    result = ft_strtrim(s1, set);
    if (result)
    {
        printf("Resultado de ft_strtrim: '%s'\n", result);
        free(result);
    }

    // Tercer caso de prueba: sin caracteres para recortar
    s1 = "Hola mundo!";
    set = "x";
    result = ft_strtrim(s1, set);
    if (result)
    {
        printf("Resultado de ft_strtrim: '%s'\n", result);
        free(result);
    }

    // Cuarto caso de prueba: recortar caracteres dentro de la cadena
    s1 = "###Hola###mundo###";
    set = "#";
    result = ft_strtrim(s1, set);
    if (result)
    {
        printf("Resultado de ft_strtrim: '%s'\n", result);
        free(result);
    }

    return 0;
}
*/
