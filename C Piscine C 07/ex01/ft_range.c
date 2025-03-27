/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 15:15:28 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/16 15:01:23 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	static int	*tab;
	int			cur;
	int			num_cur;

	if (min >= max)
		return (0);
	tab = (int *)malloc((max - min) * sizeof(int));
	num_cur = min;
	cur = 0;
	while (num_cur < max)
	{
		tab[cur] = num_cur;
		cur++;
		num_cur++;
	}
	return (tab);
}
