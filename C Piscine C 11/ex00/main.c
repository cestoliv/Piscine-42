/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 13:28:44 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/23 09:17:10 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_foreach(int *tab, int length, void(*f)(int));

void	bus_error(int i)
{
	printf("%d, ", i);
}

int	main(void)
{
	int	tab[4] = {1, 2, 3, 4};
	ft_foreach(tab, 4, &bus_error);
}
