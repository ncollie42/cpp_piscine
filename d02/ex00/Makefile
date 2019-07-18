CC = g++
FILES = Fixed.class.cpp \
main.cpp
FLAGS = -Wall -Werror -Wextra
NAME = Fixed

all: $(NAME)

$(NAME): $(FILES)
	$(CC) $(FILES) -o $@ $(FLAGS)
re: clean all

clean:
	rm $(NAME)