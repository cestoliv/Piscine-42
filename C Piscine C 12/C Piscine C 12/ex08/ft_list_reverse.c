/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 23:27:18 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/25 11:29:29 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	push_elem_front(t_list **begin_list, t_list *elem)
{
	if (begin_list)
		elem->next = *begin_list;
	*begin_list = elem;
}

void	ft_list_reverse(t_list **begin_with)
{
	t_list	*revert;
	t_list	*start;
	t_list	*next;

	revert = NULL;
	start = *begin_with;
	while (start)
	{
		next = start->next;
		push_elem_front(&revert, start);
		start = next;
	}
	*begin_with = revert;
}
