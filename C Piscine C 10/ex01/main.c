/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 11:58:45 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/20 09:36:07 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <libgen.h>
#include <errno.h>
#include <stdio.h>
#include <string.h>

void	ft_putstr(int fd, char *str);
void	read_and_write(int fd);

void	ft_puterr(char *err, char *filename)
{
	ft_putstr(2, "cat: ");
	ft_putstr(2, basename(filename));
	ft_putstr(2, ": ");
	ft_putstr(2, err);
	write(2, "\n", 1);
}

int	is_directory(char *filename)
{
	int	fd;

	fd = open(filename, O_RDONLY | O_DIRECTORY);
	if (fd == -1)
		return (0);
	return (1);
}

int	ft_display_file(char *filename)
{
	int		fd;

	if (is_directory(filename) == 1)
	{
		ft_puterr("Is a directory", filename);
		return (1);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		ft_puterr(strerror(errno), filename);
		return (1);
	}
	read_and_write(fd);
	if (close(fd) == -1)
	{
		ft_puterr(strerror(errno), filename);
		return (1);
	}
	return (0);
}

void	print_stdin(void)
{
	int		ret;
	char	buf[2];

	ret = read(0, buf, 1);
	while (ret)
	{
		buf[ret] = 0;
		ft_putstr(1, buf);
		ret = read(0, buf, 1);
	}
}

int	main(int argc, char **argv)
{
	int	cur;

	if (argc == 1)
		print_stdin();
	cur = 1;
	while (cur < argc)
	{
		if (argv[cur][0] == '-')
			print_stdin();
		else
			ft_display_file(argv[cur]);
		cur++;
	}
}
