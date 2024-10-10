/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 01:02:30 by marvin            #+#    #+#             */
/*   Updated: 2024/09/27 01:02:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (!s)
		return(NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	str = (char *)malloc(len * sizeof(char) + 1);
	if (!str)
		return (NULL);
	while (s[start + i] && i < len && start < ft_strlen(s))
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>

int main() {
    const char* cadena = "Hola, mundo!";
    
    // Extraer una subcadena que comience en la posición 7 y tenga longitud 5
    char* resultado = ft_substr(cadena, 7, 5);
    
    if (resultado != NULL) {
        printf("Subcadena: %s\n", resultado);  // Imprime: "mundo"
        free(resultado);  // Liberar la memoria después de usarla
    } else {
        printf("Error al extraer la subcadena.\n");
    }

    return 0;
}
*/