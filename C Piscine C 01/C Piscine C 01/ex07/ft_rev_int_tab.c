/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 11:41:15 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/05 14:13:45 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	cur;
	int	t;

	cur = 0;
	while (cur < size / 2)
	{
		t = tab[cur];
		tab[cur] = tab[size - 1 - cur];
		tab[size - 1 - cur] = t;
		cur++;
	}
}
