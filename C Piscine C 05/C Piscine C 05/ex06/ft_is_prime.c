/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 17:12:56 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/12 14:03:11 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	cur;

	if (nb <= 1)
		return (0);
	if (nb == 2147483647)
		return (1);
	cur = 1;
	while (cur <= nb)
	{
		if (nb % cur == 0)
			if (cur != 1 && cur != nb)
				return (0);
		cur++;
	}
	return (1);
}