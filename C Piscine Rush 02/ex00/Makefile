# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ocartier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/21 13:37:47 by ocartier          #+#    #+#              #
#    Updated: 2021/08/22 16:45:50 by ocartier         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SCRS	= srcs/main.c srcs/converter.c srcs/converter_utils.c srcs/ft_utils.c srcs/parse_file.c srcs/parse_file_utils.c srcs/parse_dict.c srcs/parse_dict_utils.c

OBJS	= ${SCRS:.c=.o}

NAME	= rush-02

.c.o:	${CC} -c $< -o ${<:.c=.o}

CC		= gcc -Wall -Wextra -Werror -I includes

all:		${OBJS}
			${CC} -o ${NAME} ${OBJS}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

.PHONY:		all clean fclean
