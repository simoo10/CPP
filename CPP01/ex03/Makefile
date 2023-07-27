CFLAGS	= -Wall -Wextra -Werror -std=c++98c
LIBC	= ar -rc
RM		= rm -f
NAME	= weapon
SRC		= main.cpp \
			HumanA.cpp \
			 HumanB.cpp \
			 Weapon.cpp \
			 

OBJ	= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(CFLAGS) $(OBJ) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re:	fclean all