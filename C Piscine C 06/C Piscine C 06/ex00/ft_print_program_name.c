/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 08:57:24 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/12 18:27:08 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	cur;

	(void) argc;
	cur = 0;
	while (argv[0][cur] != 0)
	{
		write(1, &argv[0][cur], 1);
		cur++;
	}
	write(1, "\n", 1);
}
