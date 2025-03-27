/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 14:41:48 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/25 16:48:24 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data);

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*last_elem;
	t_list	*new_elem;
	
	if (*begin_list)
	{
		last_elem = *begin_list;
		while (last_elem->next)
			last_elem = last_elem->next;
		new_elem = ft_create_elem(data);
		last_elem->next = new_elem;
	}
	else
		(*begin_list) = ft_create_elem(data);
}
