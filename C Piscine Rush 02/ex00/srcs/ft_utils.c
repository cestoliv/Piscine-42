/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 10:48:30 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/22 13:02:21 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	cur;

	cur = 0;
	while (str[cur] != 0)
		cur++;
	return (cur);
}

void	ft_strcat_space(char *dest, char *src)
{
	int	cur;
	int	destcur;

	cur = 0;
	destcur = ft_strlen(dest);
	dest[destcur] = ' ';
	destcur++;
	while (src[cur] != 0)
	{
		dest[destcur] = src[cur];
		cur++;
		destcur++;
	}
	dest[destcur] = 0;
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		cur;

	dup = (char *)malloc(ft_strlen(src) + 1);
	cur = 0;
	while (src[cur] != 0)
		dup[cur] = src[cur], cur++;
	dup[cur] = 0;
	return (dup);
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
