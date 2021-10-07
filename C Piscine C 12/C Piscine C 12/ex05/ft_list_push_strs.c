/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 15:41:53 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/25 10:09:11 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data);

t_list	*ft_list_push_strs(int size, char **strs)
{
	int		cur;
	t_list	*list;
	t_list	*new_elem;

	list = 0;
	cur = 0;
	while (cur < size)
	{
		new_elem = ft_create_elem(strs[cur]);
		new_elem->next = list;
		list = new_elem;
		cur++;
	}
	return (list);
}
