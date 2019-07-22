# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncollie <ncollie@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/28 21:57:22 by anjansse          #+#    #+#              #
#    Updated: 2019/07/21 21:13:56 by anjansse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ft_retro
GENERAL		= main.cpp AEnemies.cpp Player.cpp Entity.cpp Bullets.cpp

SRCS		= $(addprefix src/, $(GENERAL))

INCLUDES	= -I inc/

CC		= clang++

CFLAGS		= -Wall -Wextra -Werror -lncurses

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	@echo ""
	@echo -n 'Compiling Program...'
	@$(CC) $(CFLAGS) $(SRCS) $(INCLUDES) -o $(NAME)
	@echo "\t\x1b[92m✓✓\x1b[0m\n"

git:
	@git add .
	@git commit -m "$(C)"
	@git push

clean:
	@rm -rf build

fclean: clean
	@rm -rf $(NAME)
	@echo "\t\n\x1b[96mASM \x1b[91mlibrary has been cleaned!\x1b[0m\n"

re: fclean all
