/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 09:28:25 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/20 10:11:45 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <libgen.h>

void	ft_putstr(int fd, char *str)
{
	int	cur;

	cur = 0;
	while (str[cur] != 0)
	{
		 write(fd, &str[cur], 1);
		cur++;
	}
}

void	read_and_write(int fd)
{
	int		ret;
	char	buf[2];

	ret = read(fd, buf, 1);
	while (ret)
	{
		buf[ret] = 0;
		ft_putstr(1, buf);
		ret = read(fd, buf, 1);
	}
}

int	ft_strlen(char *str)
{
	int	cur;

	cur = 0;
	while (str[cur] != 0)
		cur++;
	return (cur);
}

int	is_directory(char *filename)
{
	int	fd;

	fd = open(filename, O_RDONLY | O_DIRECTORY);
	if (fd == -1)
		return (0);
	return (1);
}

void	print_file_name(char *filename)
{
	ft_putstr(1, "==> ");
	ft_putstr(1, basename(filename));
	if (is_directory(filename) == 1)
		ft_putstr(1, " <==");
	else
		ft_putstr(1, " <==\n");
}
