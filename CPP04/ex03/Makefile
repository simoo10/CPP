CLANG = c++
PPFLAGS	= -Wall -Wextra -Werror -std=c++98
LIBC	= ar -rc
RM		= rm -f
NAME	= materia
SRC		= main.cpp\
			MateriaSource.cpp\
			Character.cpp\
			Cure.cpp\
			Ice.cpp\
			AMateria.cpp\

OBJ	= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): 
	$(CLANG) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re:	fclean all