CLANG = c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
LIBC	= ar -rc
RM		= rm -f
NAME	= serialize
SRC		= main.cpp\
			Serialize.cpp\

OBJ	= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): 
	$(CLANG) $(PPFLAGS) $(SRC) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re:	fclean all