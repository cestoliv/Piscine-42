/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict_utils.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 11:16:30 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/22 11:16:31 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_DICT_UTILS_H
# define PARSE_DICT_UTILS_H
char	*get_number(int *cur, char *str, char **number);
int		get_value_size(int cur, char *str);
int		is_only_space(int cur, char *str);
#endif
