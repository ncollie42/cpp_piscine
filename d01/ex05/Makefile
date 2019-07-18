CC = g++
FILES = Brain.cpp \
Human.cpp \
main.cpp
FLAGS = -Wall -Werror -Wextra
NAME = Human

all: $(NAME)

$(NAME): $(FILES)
	$(CC) $(FILES) -o $@ $(FLAGS)

clean:
	rm $(NAME)