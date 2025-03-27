# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ocartier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/23 20:01:12 by ocartier          #+#    #+#              #
#    Updated: 2021/08/24 08:55:20 by ocartier         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SCRS	= main.c

OBJS	= ${SCRS:.c=.o}

NAME	= do-op

.c.o:
		${CC} -c $< -o ${<:.c=.o}

CC		= gcc -Wall -Wextra -Werror

all:		${OBJS}
			${CC} -o ${NAME} ${OBJS}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

.PHONY:		all clean fclean

