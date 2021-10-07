/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_file_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpayet-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 13:33:58 by lpayet-p          #+#    #+#             */
/*   Updated: 2021/08/22 13:02:55 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int	*ft_get_line_lens_loop(int file, int *file_sizes)
{
	char	c;
	int		i;
	int		line_index;

	c = 0;
	i = 0;
	line_index = -1;
	while (read(file, &c, 1))
	{
		if (c == '\n')
		{
			if (i >= 0 && line_index >= 0)
				file_sizes[line_index + 1] = i;
			i = -1;
		}
		if (i == 0)
			line_index++;
		i++;
	}
	return (file_sizes);
}

int	ft_get_lines_read_c(char c, int *index[2], int *file_sizes, char ***lines)
{
	if (c == '\n')
	{
		if (*index[0] >= 0)
			(*lines)[*index[1]][*index[0]] = 0;
		*index[0] = -1;
	}
	if (*index[0] == 0)
	{
		(*index[1])++;
		(*lines)[*index[1]] = malloc(sizeof(char)
				* (file_sizes[*index[1] + 1] + 1));
		if ((*lines)[*index[1]] == NULL)
			return (-1);
	}
	if (*index[0] >= 0)
		(*lines)[*index[1]][*index[0]] = c;
	(*index[0])++;
	return (0);
}

int	ft_get_lines_loop(int file, int *file_sizes, char ***lines)
{
	char	c;
	int		i;
	int		line_index;
	int		read_res;
	int		*tab[2];

	c = 0;
	i = 0;
	line_index = -1;
	while (read(file, &c, 1))
	{
		tab[0] = &i;
		tab[1] = &line_index;
		read_res = ft_get_lines_read_c(c, tab, file_sizes, lines);
		if (read_res == -1)
			return (-1);
	}
	(*lines)[line_index + 1] = NULL;
	return (0);
}
