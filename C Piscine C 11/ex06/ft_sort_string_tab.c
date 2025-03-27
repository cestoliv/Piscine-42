/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 08:48:22 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/23 08:58:49 by ocartier         ###   ########lyon.fr   */
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

void	ft_sort_string_tab(char **tab)
{
	int		cur;
	int		cur2;
	char	*temp;

	cur = 0;
	while (tab[cur] != 0)
	{
		cur2 = cur;
		while (tab[cur2] != 0)
		{
			if (ft_strcmp(tab[cur], tab[cur2]) > 0)
			{
				temp = tab[cur];
				tab[cur] = tab[cur2];
				tab[cur2] = temp;
			}
			cur2++;
		}
		cur++;
	}	
}
