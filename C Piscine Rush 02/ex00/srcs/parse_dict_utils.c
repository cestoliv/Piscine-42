/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 10:31:33 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/22 16:39:15 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*str_dup(char *str, int s_cur, int e_cur)
{
	int		cur;
	char	*result;

	result = (char *)malloc(sizeof(char) * (e_cur - s_cur + 2));
	cur = 0;
	while (s_cur <= e_cur)
	{
		result[cur] = str[s_cur];
		s_cur++;
		cur++;
	}
	result[cur] = 0;
	return (result);
}

int	get_number(int *cur, char *str, char **number)
{
	int	start_cur;

	if (str[*cur] == '+' || str[*cur] == '-')
		*cur = *cur + 1;
	else if (str[*cur] < '0' || str[*cur] > '9')
		return (1);
	start_cur = *cur;
	while (str[*cur] >= '0' && str[*cur] <= '9')
		*cur = *cur + 1;
	*number = str_dup(str, start_cur, *cur - 1);
	return (0);
}

int	is_only_space(int cur, char *str)
{
	while (str[cur] != 0)
	{
		if (str[cur] != ' ')
			return (0);
		cur++;
	}
	return (1);
}

int	get_value_size(int cur, char *str)
{
	int	value_size;

	value_size = 0;
	while (str[cur] >= 32 && str[cur] <= 126)
	{
		if (is_only_space(cur, str) == 1)
			break ;
		if (str[cur] != ' ')
			value_size++;
		else if (str[cur] == ' ' && str[cur - 1] != ' ' && str[cur - 1] != ':')
			value_size++;
		cur++;
	}
	return (value_size);
}
