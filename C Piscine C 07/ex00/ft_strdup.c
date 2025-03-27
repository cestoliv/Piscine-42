/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 13:24:23 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/16 15:05:27 by ocartier         ###   ########lyon.fr   */
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
