NAME = templates

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 

SRC = main.cpp 

OBJ =$(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ) whatever.hpp
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean :
	@rm -rf $(OBJ)
fclean : clean
	@rm -rf $(NAME)
re : fclean all