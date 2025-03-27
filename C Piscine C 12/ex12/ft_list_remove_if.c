/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 04:12:47 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/25 09:01:08 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(),
		void (*free_fct)(void *))
{
	t_list	*to_remove;
	t_list	*curr_elem;

	curr_elem = (*begin_list);
	if (curr_elem && (*cmp)(curr_elem->data, data_ref) == 0)
	{
		(*begin_list) = (*begin_list)->next;
		(*free_fct)(curr_elem->data);
		free(curr_elem);
	}
	curr_elem = (*begin_list);
	while (curr_elem && curr_elem->next)
	{
		if ((*cmp)(curr_elem->next->data, data_ref) == 0)
		{
			to_remove = curr_elem->next;
			curr_elem->next = curr_elem->next->next;
			(*free_fct)(to_remove->data);
			free(to_remove);
		}
		else
			curr_elem = curr_elem->next;
	}
}
