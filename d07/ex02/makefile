CC = g++
FILE = main.cpp
FLAGS = -Wall -Werror -Wextra
NAME = array
all: $(NAME)

$(NAME): $(FILE) Array.hpp
	$(CC) $(FILE) $(FLAGS) -o $@
clean:
	rm $(NAME) 
re: clean all