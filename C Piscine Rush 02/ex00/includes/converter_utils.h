/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_utils.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 10:51:13 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/22 17:18:49 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_UTILS_H
# define CONVERTER_UTILS_H
char	*ft_get_value(char *key, char **numbers, char **values);
char	*ft_get_magnitude(char *str);
char	*ft_get_magnitude_number(char *str);
int		only_zero(char *str);
#endif
