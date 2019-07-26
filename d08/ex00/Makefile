CC = g++
FILE = main.cpp
FLAGS = -Wall -Werror -Wextra
NAME = find
all: $(NAME)

$(NAME): $(FILE) easyfind.hpp
	$(CC) $(FILE) $(FLAGS) -o $@
clean:
	rm $(NAME) 
re: clean all