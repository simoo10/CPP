CXX = c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98 -fsanitize=address
RM		= rm -f
NAME	= identification
SRC		= main.cpp\

OBJ	= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re:	fclean all