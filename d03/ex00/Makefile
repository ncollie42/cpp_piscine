CC = g++
FILES = main.cpp \
FragTrap.cpp
NAME = game
FLAGS = -Wall -Werror -Wextra

all:$(NAME)

$(NAME): $(FILES)
	$(CC) $(FILES) -o $@ $(FLAGS)

clean:
	rm $(NAME)

re: clean all