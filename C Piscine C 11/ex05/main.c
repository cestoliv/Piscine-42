/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 13:40:30 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/23 08:47:00 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	nb;
	int	cur;
	int	is_negative;

	cur = 0;
	nb = 0;
	is_negative = 1;
	while ((str[cur] >= 9 && str[cur] <= 13) || str[cur] == ' ')
		cur++;
	while (str[cur] == '+' || str[cur] == '-')
	{
		if (str[cur] == '-')
			is_negative *= -1;
		cur++;
	}
	while (str[cur] >= 48 && str[cur] <= 57)
	{
		nb = nb * 10 + str[cur] - '0';
		cur++;
	}
	return (nb * is_negative);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	cur;

	cur = 0;
	while (s1[cur] != 0 && s2[cur] != 0)
	{
		if (s1[cur] != s2[cur])
		{
			return ((unsigned char)s1[cur] - (unsigned char)s2[cur]);
		}
		cur++;
	}
	return ((unsigned char)s1[cur] - (unsigned char)s2[cur]);
}

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

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	if (ft_strcmp(argv[2], "+") == 0)
		ft_putnbr(ft_atoi(argv[1]) + ft_atoi(argv[3]));
	else if (ft_strcmp(argv[2], "-") == 0)
		ft_putnbr(ft_atoi(argv[1]) - ft_atoi(argv[3]));
	else if (ft_strcmp(argv[2], "/") == 0)
	{
		if (ft_atoi(argv[3]) == 0)
			write(1, "Stop : division by zero", 23);
		else
			ft_putnbr(ft_atoi(argv[1]) / ft_atoi(argv[3]));
	}
	else if (ft_strcmp(argv[2], "*") == 0)
		ft_putnbr(ft_atoi(argv[1]) * ft_atoi(argv[3]));
	else if (ft_strcmp(argv[2], "%") == 0)
	{
		if (ft_atoi(argv[3]) == 0)
			write(1, "Stop : modulo by zero", 21);
		else
			ft_putnbr(ft_atoi(argv[1]) % ft_atoi(argv[3]));
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
}
