/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 13:40:30 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/23 07:47:17 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_count_if(char **tab, int length, int(*f)(char*));

int	segfault(char *str)
{
	if (str[0] == 'o')
		return (1);
	else
		return (0);
}

int	main(void)
{
	char **tab;
	tab = (char **)malloc(sizeof(char *) * 4);

	tab[0] = (char *)malloc(sizeof(char) * 6);
	tab[0] = "oello";	
	tab[1] = (char *)malloc(sizeof(char) * 6);
	tab[1] = "World";
	tab[2] = (char *)malloc(sizeof(char) * 3);
	tab[2] = "!!";
	tab[3] = 0;

	printf("%d", ft_count_if(tab, 3, &segfault));
}
