/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 11:04:46 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/17 11:54:54 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

struct s_stock_str  *ft_strs_to_tab(int ac, char **av);

int	main(void)
{
	char **strs;

	strs = (char **)malloc(sizeof(char *) * 3);
	strs[0] = (char *)malloc(sizeof(char) * 6);
	strs[0] = "Hello";
	strs[1] = (char *)malloc(sizeof(char) * 6);
	strs[1] = "World";
	strs[2] = (char *)malloc(sizeof(char) * 3);
	strs[2] = "!!";
	
	t_stock_str *result_arr = ft_strs_to_tab(3, strs);
	int cur = 0;
	while (cur < 4)
	{
		printf("%d => size : %d, str : %s, copy : %s\n", cur, result_arr[cur].size, result_arr[cur].str, result_arr[cur].copy);
		cur++;
	}
}
