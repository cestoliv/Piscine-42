/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpayet-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 10:02:50 by lpayet-p          #+#    #+#             */
/*   Updated: 2021/08/22 14:15:17 by lpayet-p         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "parse_file_utils.h"

int	ft_get_line_number(const char *pathname)
{
	int		file;
	char	c;
	int		i;
	int		line_index;

	file = open(pathname, O_RDONLY);
	if (file == -1)
		return (-1);
	c = 0;
	i = 0;
	line_index = 0;
	while (read(file, &c, 1))
	{
		if (c == '\n')
			i = -1;
		if (i == 0)
			line_index++;
		i++;
	}
	close(file);
	return (line_index);
}

int	*ft_get_line_lens(const char *pathname)
{
	int		file;
	int		*file_sizes;

	file_sizes = malloc(sizeof(int) * (1 + ft_get_line_number(pathname)));
	if (file_sizes == NULL)
		return (NULL);
	file_sizes[0] = ft_get_line_number(pathname);
	file = open(pathname, O_RDONLY);
	if (file == -1 || file_sizes[0] == -1)
		return (NULL);
	if (ft_get_line_lens_loop(file, file_sizes) == NULL)
		return (NULL);
	close(file);
	return (file_sizes);
}

int	ft_get_lines(const char *pathname, char ***lines)
{
	int			file;
	int			*file_sizes;
	const char	*default_path = "numbers.dict";

	if (pathname == NULL)
		pathname = default_path;
	file_sizes = ft_get_line_lens(pathname);
	file = open(pathname, O_RDONLY);
	if (file_sizes == NULL || file == -1)
		return (-1);
	*lines = malloc(sizeof(char *) * (file_sizes[0] + 1));
	if (*lines == NULL)
		return (-1);
	if (ft_get_lines_loop(file, file_sizes, lines) == -1)
		return (-1);
	free(file_sizes);
	close(file);
	return (0);
}
