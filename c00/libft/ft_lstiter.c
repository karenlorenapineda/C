/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 10:51:28 by marvin            #+#    #+#             */
/*   Updated: 2024/10/03 10:51:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*lst_ptr;

	if (!lst)
		return ;
	lst_ptr = lst;
	while (lst_ptr != NULL)
	{
		(*f)(lst_ptr->content);
		lst_ptr = lst_ptr->next;
	}
	
}