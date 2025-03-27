# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ocartier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/18 11:57:23 by ocartier          #+#    #+#              #
#    Updated: 2021/08/24 08:52:41 by ocartier         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SCRS	= main.c tools.c atoi.c process_arg.c

OBJS	= ${SCRS:.c=.o}

NAME	= ft_tail

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
