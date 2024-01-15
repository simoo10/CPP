CXX = c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 
RM		= rm -f
NAME	= RPN
SRC		= main.cpp\
			RPN.cpp\

OBJ	= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re:	fclean all