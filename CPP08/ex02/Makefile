CXX = c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 
RM		= rm -f
NAME	= mstack
SRC		= main.cpp\

OBJ	= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re:	fclean all