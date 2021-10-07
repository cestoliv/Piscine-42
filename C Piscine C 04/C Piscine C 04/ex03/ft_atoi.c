/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_atoi.c										  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: ocartier <marvin@42.fr>					+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/08/09 15:35:43 by ocartier		  #+#	#+#			 */
/*   Updated: 2021/08/19 09:36:32 by ocartier         ###   ########lyon.fr   */
/*																			*/
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	nb;
	int	cur;
	int	is_negative;

	cur = 0;
	nb = 0;
	is_negative = 1;
	while ((str[cur] >= 9 && str[cur] <= 13) || str[cur] == ' ')
		cur++;
	while (str[cur] == '+' || str[cur] == '-')
	{
		if (str[cur] == '-')
			is_negative *= -1;
		cur++;
	}
	while (str[cur] >= 48 && str[cur] <= 57)
	{
		nb = nb * 10 + str[cur] - '0';
		cur++;
	}
	return (nb * is_negative);
}
