/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 15:26:20 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/12 13:10:33 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	cur;
	int	num;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	cur = 0;
	num = 1;
	while (cur++ < nb)
		num *= cur;
	return (num);
}
