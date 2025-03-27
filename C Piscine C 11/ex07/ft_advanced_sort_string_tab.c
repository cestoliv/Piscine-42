/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 09:00:23 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/24 08:17:55 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
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
			if (cmp(tab[cur], tab[cur2]) > 0)
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
