/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 10:49:34 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/22 17:49:55 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_utils.h"

extern int	g_is_error;

char	*ft_get_value(char *key, char **numbers, char **values)
{
	int	i;
	char *empty_str;

	i = 0;
	while (numbers[i])
	{
		if (ft_strcmp(numbers[i], key) == 0)
			return (values[i]);
		i++;
	}
	g_is_error = 1;
	empty_str = (char *)malloc(1 * sizeof(char));
	empty_str[0] = 0;
	return (empty_str);
}

char	*ft_get_magnitude(char *str)
{
	int		n;
	int		len;
	char	*magnitude;

	n = ft_strlen(str);
	len = ft_strlen(str);
	if (len >= 4)
		while ((n - 1) % 3 != 0)
			n--;
	else
		n = len;
	magnitude = malloc(n + 1);
	magnitude[0] = '1';
	magnitude[n] = '\0';
	while (--n > 0)
		magnitude[n] = '0';
	return (magnitude);
}

char	*ft_get_magnitude_number(char *str)
{
	int		n;
	int		i;
	int		len;
	char	*number;

	len = ft_strlen(str);
	if (len >= 4)
	{
		n = (ft_strlen(str) - 1) % 3 + 1;
		number = malloc(n + 1);
		i = 0;
		while (i < n)
		{
			number[i] = str[i];
			i++;
		}
	}
	if (len <= 3)
	{
		n = 2;
		number = malloc(n);
		number[0] = str[0];
	}
	number[n] = '\0';
	return (number);
}

int	only_zero(char *str)
{
	int	cur;

	cur = -1;
	while (cur++, str[cur] != 0)
		if (str[cur] != '0')
			return (1);
	return (0);
}
