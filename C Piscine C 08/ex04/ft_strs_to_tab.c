/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 11:04:23 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/17 11:55:28 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	cur;

	cur = 0;
	while (str[cur] != 0)
		cur++;
	return (cur);
}

void	strcop(char *src, char *dup1, char *dup2)
{
	int		cur;

	cur = 0;
	while (src[cur] != 0)
	{
		dup1[cur] = src[cur];
		dup2[cur] = src[cur];
		cur++;
	}
	dup1[cur] = 0;
	dup2[cur] = 0;
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int				cur_arr;
	int				str_len;
	unsigned long	mall_size;
	t_stock_str		*r_arr;

	r_arr = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (r_arr == NULL)
		return (NULL);
	cur_arr = 0;
	while (cur_arr < ac)
	{
		str_len = ft_strlen(av[cur_arr]);
		mall_size = sizeof(char) * (str_len + 1);
		r_arr[cur_arr].size = str_len;
		r_arr[cur_arr].str = (char *)malloc(mall_size);
		if (r_arr[cur_arr].str == NULL)
			return (NULL);
		r_arr[cur_arr].copy = (char *)malloc(mall_size);
		if (r_arr[cur_arr].copy == NULL)
			return (NULL);
		strcop(av[cur_arr], r_arr[cur_arr].str, r_arr[cur_arr].copy);
		cur_arr++;
	}
	r_arr[cur_arr].str = 0;
	return (r_arr);
}
