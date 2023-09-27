# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dfinn <dfinn@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/24 13:13:31 by dfinn             #+#    #+#              #
#    Updated: 2023/09/24 13:57:41 by dfinn            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

INC_DIR = -I includes
SRCS_DIR = srcs
OBJS_DIR = objs

SRCS = mandatory/utils/error.c \
	mandatory/utils/utils.c \
	mandatory/main.c

OBJS = $(addprefix ${OBJS_DIR}/, ${SRCS:%.c=%.o})

FT_PRINTF_PATH = libs/ft_printf
FT_PRINTF_LIB = ${FT_PRINTF_PATH}/libftprintf.a
FT_PRINTF_INC = -I ${FT_PRINTF_PATH}/includes

MLX_PATH = libs/mlx
MLX_LIB = ${MLX_PATH}/libmlx.a
MLX_INC = -I ${MLX_PATH}
MLX_FLAGS = -framework OpenGL -framework AppKit

all: ${NAME}

${OBJS_DIR}/%.o: ${SRCS_DIR}/%.c
	@mkdir -p ${@D}
	${CC} ${CFLAGS} ${INC_DIR} ${FT_PRINTF_INC} ${MLX_INC} -c $< -o $@

${NAME}: ${OBJS}
	@make -C ${FT_PRINTF_PATH}
	${CC} ${CFLAGS} ${OBJS} ${FT_PRINTF_LIB} ${MLX_LIB} ${MLX_FLAGS} -o ${NAME}

clean:
	@make clean -C ${FT_PRINTF_PATH}
	${RM} ${OBJS_DIR}

fclean: clean
	@make fclean -C ${FT_PRINTF_PATH}
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re

