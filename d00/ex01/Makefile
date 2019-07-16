CC = g++
FLAGS = -Werror -Wall -Wextra
CPP_STUFF = -std=c++98
FILES = main.cpp \
phonebook.cpp \
contact.cpp

NAME = phonebook

all: $(NAME)

$(NAME): $(FILES)
	$(CC) $(CPP_STUFF) $(FILES) -o $@

clean:
	@rm $(NAME)