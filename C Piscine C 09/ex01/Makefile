# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ocartier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/17 16:19:40 by ocartier          #+#    #+#              #
#    Updated: 2021/08/23 07:33:47 by ocartier         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SCRS		= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

OBJS		= ${SCRS:.c=.o}

NAME		= libft.a

CC			= gcc -Wall -Wextra -Werror

.c.o:
			${CC} -I includes -c $< -o ${<:.c=.o}

all:		${NAME}

${NAME}:	${OBJS}
			ar rcs ${NAME} ${OBJS}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
