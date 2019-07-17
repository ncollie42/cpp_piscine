CC = g++
FILES = tests.cpp \
Account.class.cpp
FLAGS = -Wall -Werror -Wextra
NAME = new

all:$(NAME)

$(NAME): $(FILES)
	$(CC) $(FILES) -o $@ $(FLAGS)

clean:
	rm $(NAME)