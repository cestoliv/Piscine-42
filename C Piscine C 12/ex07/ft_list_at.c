/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 09:48:13 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/25 17:52:26 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	cur;
	t_list			*next_elem;

	if (!begin_list)
		return (NULL);
	cur = 0;
	next_elem = begin_list;
	while (next_elem && cur < nbr)
	{
		next_elem = next_elem->next;
		cur++;
	}
	if (cur != nbr)
		return (NULL);
	return (next_elem);
}
