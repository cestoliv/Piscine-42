/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 09:08:07 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/11 09:43:27 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	cur;
	int	cur2;

	if (argc < 2)
		return (0);
	cur = argc - 1;
	while (cur >= 1)
	{
		cur2 = 0;
		while (argv[cur][cur2] != 0)
		{
			write(1, &argv[cur][cur2], 1);
			cur2++;
		}
		write(1, "\n", 1);
		cur--;
	}
}
