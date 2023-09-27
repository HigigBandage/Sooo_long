# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fluchten <fluchten@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/09 08:04:05 by fluchten          #+#    #+#              #
#    Updated: 2023/02/18 15:14:43 by fluchten         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

INC_DIR = includes
SRCS_DIR = srcs
OBJS_DIR = objs

SRCS = ft_printf.c ft_printf_utils1.c ft_printf_utils2.c
OBJS = $(addprefix ${OBJS_DIR}/, ${SRCS:%.c=%.o})

all: ${NAME}

${OBJS_DIR}/%.o: ${SRCS_DIR}/%.c
	@mkdir -p ${@D}
	${CC} ${CFLAGS} -I ${INC_DIR} -c $< -o $@
	
${NAME}: ${OBJS}
	ar -rcs ${NAME} ${OBJS}

clean:
	${RM} ${OBJS_DIR}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re