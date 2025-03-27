/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 10:06:29 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/11 16:21:05 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	index_in_str(char *str, char c)
{
	int	cur;

	cur = 0;
	while (str[cur] != 0)
	{
		if (str[cur] == c)
			return (cur);
		cur++;
	}
	return (-1);
}

int	check_base(char *str)
{
	int	cur;
	int	cur2;

	cur = 0;
	while (str[cur] != 0)
	{
		cur2 = 0;
		while (str[cur2] != 0)
		{
			if (cur != cur2 && str[cur] == str[cur2])
				return (-1);
			cur2++;
		}
		if ((str[cur] >= 9 && str[cur] <= 13) || str[cur] == ' ')
			return (-1);
		if (str[cur] == '+' || str[cur] == '-')
			return (-1);
		cur++;
	}
	return (cur);
}

int	ft_atoi_base(char *str, char *base)
{
	int	nb;
	int	cur;
	int	is_negative;
	int	base_len;

	cur = -1;
	nb = 0;
	is_negative = 1;
	base_len = check_base(base);
	if (base_len < 2)
		return (0);
	while (cur++, str[cur] != 0)
		if ((str[cur] < 9 || str[cur] > 13) && str[cur] != ' ')
			break ;
	cur--;
	while (cur++, str[cur] != 0 && (str[cur] == '+' || str[cur] == '-'))
		if (str[cur] == '-')
			is_negative *= -1;
	cur--;
	while (cur++, str[cur] != 0 && index_in_str(base, str[cur]) != -1)
		nb = nb * base_len + index_in_str(base, str[cur]);
	return (nb * is_negative);
}
