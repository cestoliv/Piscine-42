/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 14:55:35 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/16 15:01:15 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	*range;
	int	size;
	int	cur;

	size = ft_ultimate_range(&range, 8, 19);
	cur = 0;
	while (cur < size)
	{
		printf("%d => %d\n", cur, range[cur]);
		cur++;
	}
}
