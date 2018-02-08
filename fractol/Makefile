# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wsabates <wsabates@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/22 16:36:17 by wsabates          #+#    #+#              #
#    Updated: 2018/02/08 14:28:03 by wsabates         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fractol

SRC_NAME = init_struct.c ft_mandelbrot.c rgb_to_hexa.c rgb_to_hexa2.c main.c\
 mlx_pixel_put_to_img.c tricorn.c julia.c ft_exit.c affichage.c init_color.c \
 flower.c bubble.c init_struct2.c burningship.c mouse_hook.c rool_hook.c  \
 ft_tabcolor3.c ft_tabcolor.c ft_tabcolor2.c julia2.c ft_mandelbrot2.c ft_mandelbrot_psy.c \
 psy.c mega_psy.c init_struct3.c witch_fractal.c ft_keyfunc.c ft_keyfunc2.c

SRC_PATH = src

SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))

INC = libft/libft.a

CCFLAG = gcc -Ofast -flto -march=native -Wall -Werror -Wextra

LIB_FLAG = libft/libft.a minilibx_macos/libmlx.a

FLAGMLX = -framework OpenGL -framework Appkit

INCLUDE	= fract.h \
		  libft/libft.h

all : $(NAME)

$(NAME): $(SRC)
		@echo Fractol compiled "\033[32m[ ✔ ]\033[00m"
	 	@(cd libft; make re; make clean; cd ..)
		@(cd minilibx_macos; make re; cd ..)
		@$(CCFLAG) $(LIB_FLAG) -o $@ $^ $(FLAGMLX)

./&.o: %.c
	@$(CCFLAG) -c $< -o $@

clean:
	@echo CLEAN compiled "\033[32m[ ✔ ]\033[00m"
	@(cd minilibx_macos; make clean; cd ..)

fclean: clean
	@echo FCLEAN compiled "\033[32m[ ✔ ]\033[00m"
	@(cd libft; make fclean; cd ..; rm -fv $(NAME))

re : fclean all

.PHONY: clean fclean re all
