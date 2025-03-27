/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 09:32:45 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/09 09:21:13 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ol_strlen(char *str)
{
	unsigned int	cur;

	cur = 0;
	while (str[cur] != 0)
	{
		cur++;
	}
	return (cur);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	cur;

	if (size == 0)
	{
		return (ol_strlen(src));
	}
	cur = 0;
	while (src[cur] != 0 && cur < (size - 1))
	{
		dest[cur] = src[cur];
		cur++;
	}
	dest[cur] = 0;
	return (ol_strlen(src));
}
