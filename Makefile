# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lshenghu <lshenghu@student.fr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/18 15:30:15 by lshenghu          #+#    #+#              #
#    Updated: 2024/11/22 11:23:20 by lshenghu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= libftprintf.a

PRINTF 	= ft_printf.c ft_num.c ft_word.c \
		
SRCS	= ${PRINTF}

OBJS	= ${SRCS:.c=.o}

CC	= gcc

CFLAGS	= -Wall -Werror -Wextra -I ./

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		ar -rsc ${NAME} ${OBJS}

all: 	${NAME}

clean:	
		rm -f ${OBJS}

fclean:	clean;
		rm -f ${NAME}

re:	fclean all

.PHONY: all clean fclean re
