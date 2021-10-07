/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 09:28:25 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/20 09:35:35 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
