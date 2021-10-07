/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_file_utils.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 11:17:17 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/22 11:17:41 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_FILE_UTILS_H
# define PARSE_FILE_UTILS_H
void	*ft_get_line_lens_loop(int file, int *file_sizes);
int		ft_get_lines_loop(int file, int *file_sizes, char ***lines);
#endif
