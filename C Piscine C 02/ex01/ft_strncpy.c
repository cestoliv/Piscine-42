/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 08:50:06 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/08 15:10:51 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	cur;

	cur = 0;
	while (cur < n && src[cur] != 0)
	{
		dest[cur] = src[cur];
		cur++;
	}
	while (cur < n)
	{
		dest[cur] = 0;
		cur++;
	}
	return (dest);
}
