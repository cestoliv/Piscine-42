/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 10:55:13 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/09 09:11:17 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_int_as_hex(int char_int)
{
	char	c;

	if (char_int < 0)
	{
		char_int = char_int + 256;
	}
	if (char_int > 16)
	{
		print_int_as_hex(char_int / 16);
		print_int_as_hex(char_int % 16);
	}
	else
	{
		c = (char_int % 16) + '0';
		if ((char_int % 16) > 9)
		{
			c = ((char_int % 16) + 87);
		}
		write(1, &c, 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	cur;

	cur = 0;
	while (str[cur] != 0)
	{
		if (str[cur] < 32 || str[cur] == 127)
		{
			write(1, "\\", 1);
			if (str[cur] < 16 && str[cur] > 0)
			{
				write(1, "0", 1);
			}
			print_int_as_hex(str[cur]);
		}
		else
		{
			write(1, &str[cur], 1);
		}
		cur++;
	}
}
