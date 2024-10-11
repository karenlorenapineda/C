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
	int	i;

	if (!lst || !f)
		return ;
	i = ft_lstsize(lst) - 1;
	while (i >= 0)
	{
		f(lst->content);
		lst = lst->next;
		i--;
	}
}