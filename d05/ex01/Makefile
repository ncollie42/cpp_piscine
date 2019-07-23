CC = g++
FLAGS = -Werror -Wall -Wextra
CPP_STUFF = -std=c++98
FILES = main.cpp \
Bureaucrat.cpp \
Form.cpp 
NAME = form 

all: $(NAME)

$(NAME): $(FILES)
	$(CC) $(CPP_STUFF) $(FILES) -o $@ $(FLAGS)

clean:
	@rm $(NAME)

re: clean all