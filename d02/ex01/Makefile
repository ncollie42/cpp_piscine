CC = g++
FILES = Fixed.class.cpp \
main.cpp
NAME = Fixed
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(FILES)
	$(CC) $(FILES) -o $@ $(FLAGS)

clean:
	rm $(NAME)

re: clean all