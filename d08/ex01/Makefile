CC = g++
FILE = main.cpp \
span.cpp
FLAGS = -Wall -Werror -Wextra
NAME = span
all: $(NAME)

$(NAME): $(FILE)
	$(CC) $(FILE) $(FLAGS) -o $@
clean:
	rm $(NAME) 
re: clean all