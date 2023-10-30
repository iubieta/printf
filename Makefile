# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 19:10:42 by iubieta-          #+#    #+#              #
#    Updated: 2023/10/30 19:11:00 by iubieta-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = $(shell find "." -name "*.c")
OBJS = ${SRCS:.c.o}
CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar csr
RM = rm -rf

all : ${NAME}
	${AR} $^

${NAME} : ${OBJS}
	${AR} ${NAME} $^

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY: all clean fclean re