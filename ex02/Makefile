NAME = Array
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp

SRCH = Array.hpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(SRCH)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean $(NAME)