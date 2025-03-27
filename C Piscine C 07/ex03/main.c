/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 14:47:51 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/16 16:39:50 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int main(void)
{
	char	**strs;

	strs = (char **)malloc(sizeof(char *) * 3);
	strs[0] = (char *)malloc(sizeof(char) * 6);
	strs[0] = "Hello";
	strs[1] = (char *)malloc(sizeof(char) * 6);
	strs[1] = "World";
	strs[2] = (char *)malloc(sizeof(char) * 3);
	strs[2] = "!!";
	printf("%s", ft_strjoin(3, strs, " - "));
}
