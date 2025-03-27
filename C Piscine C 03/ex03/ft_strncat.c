/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 11:39:51 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/10 17:57:27 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	cur;

	cur = 0;
	while (str[cur] != 0)
	{
		cur++;
	}
	return (cur);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	cur;
	int				destcur;

	cur = 0;
	destcur = ft_strlen(dest);
	while (src[cur] != 0 && cur < nb)
	{
		dest[destcur] = src[cur];
		cur++;
		destcur++;
	}
	dest[destcur] = 0;
	return (dest);
}
