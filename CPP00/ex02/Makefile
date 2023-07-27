CFLAGS	= -Wall -Wextra -Werror -std=c++98c
LIBC	= ar -rc
RM		= rm -f
NAME	= account
SRC		= tests.cpp \
			Account.cpp \

OBJ	= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(CFLAGS) $(OBJ) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re:	fclean all