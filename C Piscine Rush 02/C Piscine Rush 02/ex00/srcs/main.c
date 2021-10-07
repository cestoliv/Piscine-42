/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 10:46:56 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/22 17:22:21 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "converter.h"
#include "ft_utils.h"

int	g_is_error = 0;

void	ft_print_error(void)
{
	if (g_is_error == 1)
		write(2, "Dict Error\n", 11);
	if (g_is_error == 2)
		write(2, "Error\n", 6);
}

int	check_arg(char *arg)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		if (arg[i] < '0' || arg[i] > '9')
			return (-1);
		i++;
	}
	return (0);
}

char	*get_num_to_convert(int argc, char **argv, char **dict_pathname)
{
	if (argc == 2)
	{
		*dict_pathname = NULL;
		if (check_arg(argv[1]) == 0)
			return (argv[1]);
	}
	if (argc == 3)
	{
		*dict_pathname = argv[1];
		if (check_arg(argv[2]) == 0)
			return (argv[2]);
	}
	g_is_error = 2;
	return (NULL);
}

int	main(int argc, char **argv)
{
	char	*written_num;
	char	*num_to_convert;
	char	*dict_pathname;
	int		cur;

	num_to_convert = get_num_to_convert(argc, argv, &dict_pathname);
	if (num_to_convert != NULL)
		written_num = get_written_num(num_to_convert, dict_pathname);
	if (g_is_error != 0)
	{
		ft_print_error();
		free(written_num);
		return (-1);
	}
	cur = 1;
	while (written_num[cur])
	{
		write(1, & written_num[cur], 1);
		cur++;
	}
	free(written_num);
	return (0);
}
