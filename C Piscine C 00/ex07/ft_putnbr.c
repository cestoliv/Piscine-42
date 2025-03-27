/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 14:54:44 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/05 15:45:28 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	write_min_int(void)
{
	int		cur;
	char	*min;

	min = "-2147483648";
	cur = 0;
	while (min[cur] != 0)
	{
		ft_putchar(min[cur]);
		cur++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write_min_int();
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
		return ;
	}
	if (nb < 10)
	{
		ft_putchar(nb + '0');
		return ;
	}
	ft_putnbr((nb / 10));
	ft_putchar((nb % 10) + '0');
	return ;
}
