/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 14:35:42 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/16 14:41:08 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split(char *str, char *charset);

int	main(void)
{
	char	**result;
	int		cur;

	printf("Hello World    !! :\n");
	result = ft_split("Hello World    !!", " ");
	cur = -1;
	while (cur++, result[cur] != 0)
		printf("%d => %s\n", cur, result[cur]);

	printf("\naaaa bbbb..cccc .dddd!!eeee :\n");
	result = ft_split("aaaa bbbb..cccc .dddd!!eeee", " .!");
	cur = -1;
	while (cur++, result[cur] != 0)
		printf("%d => %s\n", cur, result[cur]);

}
