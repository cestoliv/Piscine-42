/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 11:39:17 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/08 14:29:20 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	cur;
	int	is_printable;

	cur = 0;
	is_printable = 1;
	while (str[cur] != 0)
	{
		if (str[cur] < 32 || str[cur] > 126)
		{
			is_printable = 0;
		}
		cur++;
	}
	return (is_printable);
}
