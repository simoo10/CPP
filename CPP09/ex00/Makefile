CXX = c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 
RM		= rm -f
NAME	= btc
SRC		= main.cpp\
			BitcoinExchange.cpp\

OBJ	= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re:	fclean all