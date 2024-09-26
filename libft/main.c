/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:26:02 by marvin            #+#    #+#             */
/*   Updated: 2024/09/24 18:26:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <stdio.h>
#include  "libft.h"

int main(void)
{
    char    *str;
    const char  *src;
    char    *dest;

    src = malloc(sizeof(char) * 5);
    str = malloc(sizeof(char) * 15);
    ft_strcpy(str, "ll");
    dest = malloc(sizeof(char) * 15);
    ft_strcpy(dest, "  --12fd");

    printf("%s\n", ft_memset(str, 65, 5));
    free(dest);
    free(str);
    free(src);
    return (0);
}