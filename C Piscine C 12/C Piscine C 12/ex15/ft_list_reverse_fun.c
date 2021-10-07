/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 11:30:22 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/25 21:52:01 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	fun_push_elem_front(t_list **begin_list, t_list *elem)
{
	if (begin_list)
		elem->next = *begin_list;
	*begin_list = elem;
}
/*
void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*list;
	t_list	*revert;
	t_list	*temp;

	list = begin_list;
	revert = NULL;
	while (list)
	{
		temp = list->next;
		list->next = revert;
		revert = list;
		list = temp;
	}
	begin_list = revert;
	while (begin_list)
	{
		printf(".%s\n", begin_list->data);
		begin_list = begin_list->next;
	}
	begin_list = revert;
}
*/
void	ft_list_reverse_fun(t_list *begin_list)
{
	int		n;
	int		i;
	int		j;
	t_list	*list;
	void	*tmp;

	n = 0;
	list = begin_list;
	while (list && ++n)
		list = list->next;
	i = 0;
	while (i < n - 1)
	{
		j = i;
		list = begin_list;
		while (list && list->next && j < n - 1)
		{
			tmp = list->data;
			list->data = list->next->data;
			list->next->data = tmp;
			list = list->next;
			j++;
		}
		i++;
	}
}

