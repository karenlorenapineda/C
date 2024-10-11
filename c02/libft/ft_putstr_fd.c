/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 01:07:39 by marvin            #+#    #+#             */
/*   Updated: 2024/09/27 01:07:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;
	
	i = 0;
	if (!s)
		return ;
	while (s[i] && fd >= 0)
	{
		write(fd, &s[i], 1);
		i++;
	}
}