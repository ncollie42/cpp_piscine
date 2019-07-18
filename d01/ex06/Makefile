CC = g++
FILES = Weapon.cpp \
main.cpp \
HumanA.cpp \
HumanB.cpp 
FLAGS = -Wall -Werror -Wextra
NAME = violence


all: $(NAME)

$(NAME): $(FILES)
	$(CC) $(FILES) -o $(NAME) $(FLAGS)

clean:
	rm $(NAME)
