/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 11:00:13 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/08 14:28:31 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	cur;
	int	is_numeric;

	cur = 0;
	is_numeric = 1;
	while (str[cur] != 0)
	{
		if (str[cur] < 48 || str[cur] > 57)
		{
			is_numeric = 0;
		}
		cur++;
	}
	return (is_numeric);
}
