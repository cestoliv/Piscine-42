/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 10:41:44 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/25 11:28:59 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int(*cmp)())
{
	t_list	*curr_elem;
	t_list	*curr2_elem;
	void	*temp;

	curr_elem = *begin_list;
	while (curr_elem)
	{
		curr2_elem = curr_elem;
		while (curr2_elem)
		{
			if ((*cmp)(curr_elem->data, curr2_elem->data) > 0)
			{
				temp = curr_elem->data;
				curr_elem->data = curr2_elem->data;
				curr2_elem->data = temp;
			}
			curr2_elem = curr2_elem->next;
		}
		curr_elem = curr_elem->next;
	}	
}
