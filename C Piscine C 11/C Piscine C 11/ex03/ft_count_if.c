/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 08:46:43 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/23 09:26:55 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_count_if(char **tab, int length, int(*f)(char *))
{
	int	sum;
	int	cur;

	cur = 0;
	sum = 0;
	while (cur < length)
	{
		if ((*f)(tab[cur]) != 0)
			sum++;
		cur++;
	}
	return (sum);
}
