CC = g++
FILES = main.cpp \
FragTrap.cpp \
ScavTrap.cpp
NAME = game
FLAGS = -Wall -Werror -Wextra

all:$(NAME)

$(NAME): $(FILES)
	$(CC) $(FILES) -o $@ $(FLAGS)

clean:
	rm $(NAME)

re: clean all