# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: memam <memam@student.42mulhouse.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/21 03:18:40 by memam             #+#    #+#              #
#    Updated: 2022/06/21 02:19:39 by memam            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# =-------------------------= #
#                             #
#           SETTINGS          #
#                             #
# =-------------------------= #

NAME = push_swap
FLAGS = -Wall -Wextra -Werror -g3
DANGER = -fsanitize=address

# =-------------------------= #
#                             #
#           SOURCES           #
#                             #
# =-------------------------= #

PRINTF_FOLDER = ./ft_printf/
PRINTF_LIB = ftprintf
LIB = -L$(PRINTF_FOLDER) -l$(PRINTF_LIB)

SRC_FOLDER = ./srcs/
SRC_FILES = push_swap.c utils.c ft_split.c ft_strchr.c obtenir_stack.c \
ft_free.c swap.c  rotate.c push.c reverse_rotate.c algo_3.c  sort_stack.c \
check.c obtenir_array.c algo.c bits.c bige_algo.c

SRC = $(addprefix $(SRC_FOLDER), $(SRC_FILES))
OBJ = $(SRC:.c=.o)

# =--------------------------= #
#                              #
#             RULES            #
#                              #
# =--------------------------= #

all: $(NAME)

.c.o:
	@gcc $(FLAGS) -o $@ -c $<

dependency:
	@make -sC $(PRINTF_FOLDER)

$(NAME): dependency $(OBJ)
	@gcc $(DANGER) $(LIB) -o $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@make fclean -sC $(PRINTF_FOLDER)

re: fclean all

debug_file:
		rm -f debug
		@gcc -g $(DANGER) $(LIB) -o debug $(OBJ)

.PHONY: all dependency clean fclean re
