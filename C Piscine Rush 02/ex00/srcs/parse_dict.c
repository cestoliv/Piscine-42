/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 10:07:12 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/22 17:32:58 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "parse_dict_utils.h"

extern int	g_is_error;

int	parse_line_start(int *cur, char *str, char **number)
{
	*cur = 0;
	if (get_number(cur, str, number) != 0)
		return (1);
	while (str[*cur] == ' ')
		*cur = *cur + 1;
	if (str[*cur] != ':')
		return (1);
	*cur = *cur + 1;
	while (str[*cur] == ' ')
		*cur = *cur + 1;
	return (0);
}

int	parse_line_string(char *str, char **number, char **value)
{
	int	cur;
	int	value_cur;

	if (parse_line_start(&cur, str, number) != 0)
		return (1);
	*value = (char *)malloc(sizeof(char) * (get_value_size(cur, str) + 2));
	value_cur = 0;
	while (str[cur] >= 32 && str[cur] <= 126)
	{
		if (is_only_space(cur, str) == 1)
			break ;
		if (str[cur] != ' ' || (str[cur] == ' ' && str[cur - 1] != ' '))
		{
			(*value)[value_cur] = str[cur];
			value_cur++;
		}
		cur++;
	}
	(*value)[value_cur] = 0;
	return (0);
}

int	parse_dict_string(char **strs, char ***nums, char ***vals)
{
	int	cur;

	cur = 0;
	while (strs[cur] != 0)
		cur++;
	*nums = (char **)malloc(sizeof(char *) * (cur + 1));
	*vals = (char **)malloc(sizeof(char *) * (cur + 1));
	cur = 0;
	while (strs[cur] != 0)
	{
		if (parse_line_string(strs[cur], &(*nums)[cur], &(*vals)[cur]) != 0)
		{
			g_is_error = 1;
			return (1);
		}
		cur++;
	}
	(*nums)[cur] = 0;
	(*vals)[cur] = 0;
	return (0);
}
