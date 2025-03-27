/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 10:38:28 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/08 14:28:15 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	cur;
	int	is_alpha;

	cur = 0;
	is_alpha = 1;
	while (str[cur] != 0)
	{
		if (str[cur] < 65 || (str[cur] > 90 && str[cur] < 97) || str[cur] > 122)
		{
			is_alpha = 0;
		}
		cur++;
	}
	return (is_alpha);
}
