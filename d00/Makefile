CC = g++
FLAGS = -Werror -Wall -Wextra
CPP_STUFF = -std=c++98
FILES = megaphone.cpp
NAME = megaphone

all: $(NAME)

$(NAME): $(FILES)
	$(CC) $(CPP_STUFF) $(FILES) -o $@

clean:
	@rm $(NAME)