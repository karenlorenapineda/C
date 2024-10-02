/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:36:01 by marvin            #+#    #+#             */
/*   Updated: 2024/10/01 14:36:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void const *content)
{
	t_list	*prueba;

	prueba  =(t_list *)malloc(sizeof(t_list));
	if (!prueba)
		return (NULL);
	prueba->content = content;
	prueba->next = NULL;
	return(prueba);
}