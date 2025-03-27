/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 10:50:04 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/22 17:19:45 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft_utils.h"
#include "converter_utils.h"
#include "parse_file.h"
#include "parse_dict.h"

int	print_num(char *str, int print_o, char *str_num);

char		**g_numbers;
char		**g_values;
extern int	g_is_error;

int	print_num_inf100(char *str, int print_o, char *str_num)
{
	char	*str_cop;
	int		num;
	int		sum;

	num = ft_atoi(str);
	if (num <= 20 || num % 10 == 0)
	{
		if (print_o)
			ft_strcat_space(str_num, ft_get_value(str, g_numbers, g_values));
		return (ft_strlen(ft_get_value(str, g_numbers, g_values)) + 1);
	}
	else if (num <= 100)
	{
		sum = 0;
		str_cop = ft_strdup(str);
		str_cop[1] = '0';
		sum += print_num(str_cop, print_o, str_num);
		sum += print_num(str + 1, print_o, str_num);
		free(str_cop);
		return (sum);
	}
	return (0);
}

int	print_num_sup100(char *str, int print_o, char *str_num)
{
	int		sum;
	char	*magnum;
	char	*rest;

	sum = 0;
	magnum = ft_get_magnitude_number(str);
	sum += print_num(magnum, print_o, str_num);
	rest = ft_get_value(ft_get_magnitude(str), g_numbers, g_values);
	if (print_o)
		ft_strcat_space(str_num, rest);
	sum += print_num(str + ft_strlen(magnum), print_o, str_num);
	sum += ft_strlen(rest) + 1;
	return (sum);
}

int	print_num(char *str, int print_o, char *str_num)
{
	int		len;

	while (str[0] == '0')
		str++;
	if (str[0] == 0)
		return (0);
	len = ft_strlen(str);
	if (len <= 2)
		return (print_num_inf100(str, print_o, str_num));
	else
		return (print_num_sup100(str, print_o, str_num));
	return (0);
}

char	*get_written_num(char *str, const char *dict_pathname)
{
	char	*str_num;
	int		str_size;
	int		cur;
	char	**dict_file_content;

	if (ft_get_lines(dict_pathname, &dict_file_content) != 0
		|| parse_dict_string(dict_file_content, &g_numbers, &g_values) != 0)
	{
		g_is_error = 1;
		return (0);
	}
	cur = 0;
	if (only_zero(str) == 0)
		str_size = ft_strlen(ft_get_value("0", g_numbers, g_values));
	else
		str_size = print_num(str, 0, "");
	str_num = malloc(sizeof(char) * (str_size + 1));
	cur = -1;
	while (cur++ < str_size)
		str_num[cur] = 0;
	if (only_zero(str) == 0)
		ft_strcat_space(str_num, ft_get_value("0", g_numbers, g_values));
	else
		print_num(str, 1, str_num);
	return (str_num);
}
