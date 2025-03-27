/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 09:19:02 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/25 18:30:47 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*list;

	if (*begin_list1)
	{
		list = *begin_list1;
		while (list && list->next)
		{
			list = list->next;
		}
		while (begin_list2)
		{
			list->next = begin_list2;
			list = list->next;
			begin_list2 = begin_list2->next;
		}
	}
	else
		*begin_list1 = begin_list2;
}
