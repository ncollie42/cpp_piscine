CC = g++
FILES = main.cpp \
Zombie.cpp \
ZombieEvent.cpp
NAME = zombie
FLAGS = -g
# -Wall -Werror -Wextra 
all: $(NAME)

$(NAME): $(FILES)
	$(CC) $(FILES) -o $@ $(FLAGS)

clean:
	rm $(NAME)