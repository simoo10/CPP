CLANG = c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
LIBC	= ar -rc
RM		= rm -f
NAME	= scavtrap
SRC		= main.cpp\
			ClapTrap.cpp\
			ScavTrap.cpp\

OBJ	= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): 
	$(CLANG) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re:	fclean all