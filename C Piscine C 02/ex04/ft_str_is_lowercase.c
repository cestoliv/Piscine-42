/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 11:29:01 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/08 14:28:49 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	cur;
	int	is_lowercase;

	cur = 0;
	is_lowercase = 1;
	while (str[cur] != 0)
	{
		if (str[cur] < 97 || str[cur] > 122)
		{
			is_lowercase = 0;
		}
		cur++;
	}
	return (is_lowercase);
}
