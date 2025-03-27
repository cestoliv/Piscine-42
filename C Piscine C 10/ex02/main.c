/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 11:58:45 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/20 11:44:49 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <libgen.h>
#include <errno.h>
#include <stdio.h>
#include <string.h>

void	ft_putstr(int fd, char *str);
int		ft_strlen(char *str);
void	read_and_write(int fd);
int		is_directory(char *filename);
void	print_file_name(char *filename);
int		ft_atoi_strict(char *str);
void	put_nl(int cur, int argc, char *filename, int files_num);

void	ft_puterr(char *err, char *filename)
{
	ft_putstr(2, "tail: ");
	ft_putstr(2, basename(filename));
	ft_putstr(2, ": ");
	ft_putstr(2, err);
	write(2, "\n", 1);
}

int	display_file_end(char *filename, int end, int seek_pos, int files_num)
{
	int		fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		ft_puterr(strerror(errno), filename);
		return (1);
	}
	if (files_num > 1)
		print_file_name(filename);
	if (is_directory(filename) == 1)
		return (1);
	lseek(fd, -end, seek_pos);
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

// return -2 when there's no -c
int	get_offset(int *cur, int argc, char **argv)
{
	char	*offset_str;
	int		offset;

	if (argv[*cur][0] != '-' || argv[*cur][1] != 'c')
		return (-2);
	if (ft_strlen(argv[*cur]) > 2)
	{
		offset_str = argv[*cur] + 2;
		*cur = *cur + 1;
	}
	else if (*cur + 1 < argc)
	{
		offset_str = argv[*cur + 1];
		*cur = *cur + 2;
	}
	else
		return (-1);
	offset = ft_atoi_strict(offset_str);
	if (offset == -1)
	{
		ft_putstr(2, "tail: illegal offset -- ");
		ft_putstr(2, offset_str);
		ft_putstr(2, "\n");
	}
	return (offset);
}

int	main(int argc, char **argv)
{
	int	cur;
	int	offset;
	int	seek_pos;
	int	files_num;

	cur = 1;
	seek_pos = SEEK_SET;
	offset = get_offset(&cur, argc, argv);
	if (offset == -1)
		return (1);
	else if (offset == -2)
		offset = 0;
	else
		seek_pos = SEEK_END;
	files_num = argc - cur;
	while (cur < argc)
	{
		if (display_file_end(argv[cur], offset, seek_pos, files_num) == 0)
			put_nl(cur, argc, argv[cur], files_num);
		else
			put_nl(cur, argc, argv[cur], files_num);
		cur++;
	}
}
