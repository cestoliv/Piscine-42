/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 11:57:22 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/18 11:29:56 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		c = nb + '0';
		write(1, &c, 1);
	}
}

void	ft_putstr(char *str)
{
	int	cur;

	cur = 0;
	while (str[cur] != 0)
	{
		write(1, &str[cur], 1);
		cur++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	cur;

	cur = 0;
	while (par[cur].str != 0)
	{
		ft_putstr(par[cur].str);
		write(1, "\n", 1);
		ft_putnbr(par[cur].size);
		write(1, "\n", 1);
		ft_putstr(par[cur].copy);
		write(1, "\n", 1);
		cur++;
	}
}
