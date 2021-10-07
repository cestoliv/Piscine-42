/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 13:25:48 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/05 14:12:39 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	cur;
	int	cur2;
	int	t;

	cur = 0;
	while (cur < size)
	{
		cur2 = cur + 1;
		while (cur2 < size)
		{
			if (tab[cur] > tab[cur2])
			{
				t = tab[cur];
				tab[cur] = tab[cur2];
				tab[cur2] = t;
			}
			cur2++;
		}
		cur++;
	}
}
