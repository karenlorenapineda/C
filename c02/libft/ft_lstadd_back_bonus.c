/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 10:41:48 by marvin            #+#    #+#             */
/*   Updated: 2024/10/03 10:41:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if ((*lst) == NULL)
	{
		ft_lstadd_front(lst, new);
		return ;
	}
	else
	{
		aux = ft_lstlast(*lst);
		aux->next = new;
	}
}