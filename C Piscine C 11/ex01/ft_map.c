/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 13:43:47 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/23 09:17:27 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	cur;
	int	*result_tab;

	cur = 0;
	result_tab = (int *)malloc(sizeof(int) * length);
	while (cur < length)
	{
		result_tab[cur] = (*f)(tab[cur]);
		cur++;
	}
	return (result_tab);
}
