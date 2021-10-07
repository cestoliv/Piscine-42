/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 17:13:49 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/25 10:09:25 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*next_element;

	next_element = begin_list;
	while (begin_list)
	{
		next_element = begin_list;
		begin_list = begin_list->next;
		free_fct(next_element->data);
		free(next_element);
	}
}
