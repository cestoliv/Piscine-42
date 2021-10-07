/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 14:24:13 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/23 14:24:15 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int	cur;

	cur = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		cur++;
	}
	return (cur);
}
