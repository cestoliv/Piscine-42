/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 08:48:36 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/23 08:57:42 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_string_tab(char **tab);

int	main(int argc, char **argv)
{
	int	cur;

	ft_sort_string_tab(argv);
	cur = 0;
	while (cur++, cur < argc)
	{
		printf("%s\n", argv[cur]);
	}
}
