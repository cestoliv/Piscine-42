/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 14:41:37 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/18 09:54:51 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(void)
{
	printf("-10101010 : %s\n", ft_convert_base("   \n -10101010", "01", "01"));
	printf("-2D : %s\n", ft_convert_base("\t\n\r\v\f--+++++-45", "0123456789", "0123456789ABCDEF"));
	printf("1111 : %s\n", ft_convert_base("15", "0123456789", "01"));
	printf("16 : %s\n", ft_convert_base("10000", "01", "0123456789"));
	printf("-1f : %s\n", ft_convert_base("-31", "0123456789", "0123456789abcdef"));
	printf("31 : %s\n", ft_convert_base("+1f", "0123456789abcdef", "0123456789"));
	printf("0 : %s\n", ft_convert_base("0", "0123456789", "0123456789abcdef"));
	printf("0 : %s\n", ft_convert_base("0.1234567", "0123456789", "0123456789"));
	printf("7fffffff : %s\n", ft_convert_base("2147483647", "0123456789", "0123456789abcdef"));
	printf("-2147483648 : %s\n", ft_convert_base("-80000000", "0123456789abcdef", "0123456789"));
	printf("o : %s\n", ft_convert_base("01", "0123456789", "poneyvif"));
	printf("(null) : %s\n", ft_convert_base("", "0123456789", "poney vif"));
	printf("-806y : %s\n", ft_convert_base("-25738", "0123456789", "1234567890ertyu"));

	char *str = ft_convert_base("2147l45", "0123456789", "0123456789abcdef");
	int cur = 0;
	printf("863 : ");
	while (str[cur] != 0)
	{
		printf("%c", str[cur]);
		cur++;
	}
	printf("\n");
}
