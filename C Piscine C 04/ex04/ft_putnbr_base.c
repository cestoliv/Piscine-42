/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 09:00:40 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/19 10:38:53 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	cur;

	cur = 0;
	while (str[cur] != 0)
		cur++;
	return (cur);
}

int	check_base(char *base)
{
	int	cur;
	int	cur2;

	cur = 0;
	cur2 = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[cur] != 0)
	{
		if (base[cur] == '+' || base[cur] == '-')
			return (0);
		if (base[cur] < 32 || base[cur] > 126)
			return (0);
		cur2 = 0;
		while (base[cur2] != 0)
		{
			if (base[cur] == base[cur2] && cur != cur2)
				return (0);
			cur2++;
		}
		cur++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	int		nbr_final[32];
	int		cur;
	long	nbrl;

	if (check_base(base) == 0)
		return ;
	nbrl = nbr;
	cur = 0;
	base_len = ft_strlen(base);
	if (nbrl < 0)
	{
		nbrl = -nbrl;
		write(1, "-", 1);
	}
	while (nbrl != 0)
	{
		nbr_final[cur] = nbrl % base_len;
		nbrl = nbrl / base_len;
		cur++;
	}
	while (--cur >= 0)
		write(1, &base[nbr_final[cur]], 1);
}
