/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 08:48:36 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/24 09:23:10 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *));

int	ft_strcmp(char *s1, char *s2)
{
	int	cur;

	cur = 0;
	while (s1[cur] != 0 && s2[cur] != 0)
	{
		if (s1[cur] != s2[cur])
		{
			return ((unsigned char)s1[cur] - (unsigned char)s2[cur]);
		}
		cur++;
	}
	return ((unsigned char)s1[cur] - (unsigned char)s2[cur]);
}

int	rev(char *s1, char *s2)
{
	return (1);
}

int	main(int argc, char **argv)
{
	int	cur;

	ft_advanced_sort_string_tab(argv, &ft_strcmp);
	cur = -1;
	while (cur++, cur < argc)
	{
		printf("%s\n", argv[cur]);
	}
}

