/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 15:17:47 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/08 13:33:42 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	go_to_col_print(int x, int count_col, char *toolbox)
{
	if (count_col == 1)
		ft_putchar(toolbox[0]);
	else if (count_col == x)
		ft_putchar(toolbox[2]);
	else
		ft_putchar(toolbox[1]);
}

void	go_to_line(int x, int y, int count_col, int count_lin)
{
	char	toolbox[3];

	if (count_lin == 1)
	{
		toolbox[0] = '/';
		toolbox[1] = '*';
		toolbox[2] = '\\';
	}
	else if (count_lin == y)
	{
		toolbox[0] = '\\';
		toolbox[1] = '*';
		toolbox[2] = '/';
	}
	else
	{
		toolbox[0] = '*';
		toolbox[1] = ' ';
		toolbox[2] = '*';
	}
	go_to_col_print(x, count_col, toolbox);
}

void	rush(int x, int y)
{
	int	count_lin;
	int	count_col;

	if (y < 1 || x < 1)
	{
		return ;
	}
	count_lin = 1;
	while (count_lin <= y)
	{
		count_col = 1;
		while (count_col <= x)
		{
			go_to_line(x, y, count_col, count_lin);
			count_col++;
		}
		ft_putchar('\n');
		count_lin++;
	}
}
