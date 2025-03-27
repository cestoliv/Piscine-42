/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 13:40:30 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/24 08:01:44 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_is_sort(int *tab, int length, int(*f)(int, int));

int test_desc(int a, int b)
{
	return (b - a);
}

int test_asc(int a, int b)
{
	return (a - b);
}

int	main(int argc, char **argv)
{
	int tab[] = {1, 2, 4, 5, 7};
	int tab2[] = {1, -1, -25, -12, -13, -14};
	printf("=> %d\n", ft_is_sort(tab, 5, &test_asc));
	printf("=> %d\n", ft_is_sort(tab2, 6, &test_asc));
}
