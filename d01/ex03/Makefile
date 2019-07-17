CC = g++
FILES = Zombie.cpp \
ZombieHorde.cpp \
main.cpp
FLAGS = -Wall -Werror -Wextra
NAME = horde

all: $(NAME)


$(NAME): $(FILES)
	$(CC) $(FILES) -o $@ $(FLAGS)

clean:
	rm $(NAME)