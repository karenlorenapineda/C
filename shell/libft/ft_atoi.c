/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:07:06 by marvin            #+#    #+#             */
/*   Updated: 2024/09/24 18:07:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int res;
    int sign;

    res = 0;
    sign = 1;
    while (*str == 32 || (*str >= 9 && *str <= 13))
    str++;
    if (*str == 45 || *str == 43)
    {
        if (*str == 45)
            sign = -1;
        str++;
    }
    while (*str >= 48 && *str <= 57)
    {
        res = res * 10 + (*str - 48);
        str++;
    }
    return (res * sign);
}