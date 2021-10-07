/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 13:40:30 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/20 13:51:11 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_map(int *tab, int length, int(*f)(int));

int	segfault(int i)
{
	return (i * i);
}

int	main(void)
{
	int tab[4] = {1, 2, 3, 4};
	int *result_tab = ft_map(tab, 4, &segfault);
	int cur = 0;
	while (cur < 4)
	{
		printf("%d, ", result_tab[cur]);
		cur++;
	}
}
