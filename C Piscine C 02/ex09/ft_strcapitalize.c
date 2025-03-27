/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 14:11:27 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/08 14:41:32 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	upper_char(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}

char	lower_char(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int		cur;
	char	c;

	cur = 1;
	if (str[0] != 0)
	{
		str[0] = upper_char(str[0]);
	}
	while (str[cur] != 0 && str[cur - 1] != 0)
	{
		c = str[cur - 1];
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 'z')
		{
			str[cur] = upper_char(str[cur]);
		}
		else
		{
			str[cur] = lower_char(str[cur]);
		}
		cur++;
	}
	return (str);
}
