CC = g++
FILES = main.cpp \
Base.cpp
FLAGS = -Wall -Werror -Wextra -std=c++98
NAME = convert

all: $(NAME)

$(NAME): $(FILES)
	$(CC) $(FILES) $(FLAGS) -o $@

clean:
	rm $(NAME)

re: clean all