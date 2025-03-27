/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 11:54:58 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/09 12:55:30 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	cur;

	cur = 0;
	while (str[cur])
	{
		cur++;
	}
	return (cur++);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	cur;
	int	cur2;

	cur = 0;
	if (ft_strlen(to_find) == 0)
		return (str);
	while (str[cur] != 0)
	{
		cur2 = 0;
		while (to_find[cur2] != 0)
		{
			if (str[cur + cur2] != to_find[cur2])
				break ;
			cur2++;
		}
		if (cur2 == ft_strlen(to_find))
			return (str + cur);
		cur++;
	}
	return (0);
}
