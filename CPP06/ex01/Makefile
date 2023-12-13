CLANG = c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -f
NAME	= serialize
SRC		= main.cpp\
			Serialize.cpp\

OBJ	= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CLANG) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re:	fclean all