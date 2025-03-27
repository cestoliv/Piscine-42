/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 14:53:04 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/10 17:51:19 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

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
