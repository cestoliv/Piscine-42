/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 15:01:30 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/16 15:04:22 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	cur;

	int	*range = ft_range(4, 9);
	cur = 0;
	while (cur < 5)
	{
		printf("%d => %d\n", cur, range[cur]);
		cur++;
	}
}
