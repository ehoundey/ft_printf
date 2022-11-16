# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehoundey <ehoundey@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/20 14:39:24 by ehoundey          #+#    #+#              #
#    Updated: 2021/11/20 14:39:24 by ehoundey         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_printf.c  \
		  ft_putptr.c  \
		  ft_putchar.c \
		  ft_parser.c

NAME	= libftprintf.a

HEADER	= ft_printf.h

RM		= rm -f

OBJS	= ${SRCS:.c=.o}

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

.c.o:		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS} ${HEADER}
			ar -rcs ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
