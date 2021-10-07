/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 08:46:53 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/24 08:01:42 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_asc(int *tab, int length, int(*f)(int, int))
{
	int	cur;

	cur = 0;
	while (cur < length - 1)
	{
		if ((*f)(tab[cur], tab[cur + 1]) > 0)
			return (0);
		cur++;
	}
	return (1);
}

int	is_desc(int *tab, int length, int(*f)(int, int))
{
	int	cur;

	cur = 0;
	while (cur < length - 1)
	{
		if ((*f)(tab[cur], tab[cur + 1]) < 0)
			return (0);
		cur++;
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	if (is_desc(tab, length, f) == 1 || is_asc(tab, length, f) == 1)
		return (1);
	else
		return (0);
}
