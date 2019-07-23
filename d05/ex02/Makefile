CC = g++
FLAGS = -Werror -Wall -Wextra
CPP_STUFF = -std=c++98
FILES = main.cpp \
Bureaucrat.cpp \
Form.cpp \
PresidentialPardonForm.cpp \
ShrubberyCreationForm.cpp \
RobotomyRequestForm.cpp

NAME = ex02 

all: $(NAME)

$(NAME): $(FILES)
	$(CC) $(CPP_STUFF) $(FILES) -o $@ $(FLAGS)

clean:
	@rm $(NAME)

re: clean all