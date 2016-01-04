# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rfriscca <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/31 16:08:02 by rfriscca          #+#    #+#              #
#    Updated: 2016/01/04 12:58:46 by rfriscca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = alpha_pieces.c    \
	   create_square.c   \
	   main.c            \
	   piece_fit.c       \
	   put_piece.c       \
	   reset_piece.c     \
	   save_pieces.c     \
	   solve.c           \
	   square_min_size.c \
	   tab_alloc.c       \
	   valid_piece.c
OBJ = $(SRCS:.c=.o)
NAME = fillit
LIBFT_DIR = includes/libft
SRCS_DIR = srcs
FLAGS = -Wall -Wextra -Werror

all : LIBFT $(NAME)

$(NAME) :
	cd $(SRCS_DIR) && gcc $(FLAGS) -c $(SRCS)
	cd $(SRCS_DIR) && gcc $(OBJ) -o $(NAME) -L../includes/libft -lft && mv $(NAME) ..

LIBFT :
	cd $(LIBFT_DIR) && $(MAKE)

clean :
	cd $(SRCS_DIR) && rm -f $(OBJ)
	cd $(LIBFT_DIR) && $(MAKE) clean

fclean : clean
	rm -f $(NAME)
	cd $(LIBFT_DIR) && $(MAKE) fclean

re : fclean all

.PHONY : clean fclean re all LIBFT
