/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 11:33:47 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/08 14:29:04 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	cur;
	int	is_uppercase;

	cur = 0;
	is_uppercase = 1;
	while (str[cur] != 0)
	{
		if (str[cur] < 65 || str[cur] > 90)
		{
			is_uppercase = 0;
		}
		cur++;
	}
	return (is_uppercase);
}
