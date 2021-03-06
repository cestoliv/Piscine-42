/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 16:16:01 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/12 14:02:47 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	cur;

	cur = 1;
	while (cur * cur < nb && cur < nb / 2)
		cur++;
	if (cur * cur == nb)
		return (cur);
	return (0);
}
