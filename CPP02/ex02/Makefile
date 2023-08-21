CLANG = g++-11
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
LIBC	= ar -rc
RM		= rm -f
NAME	= fixed
SRC		= main.cpp \
			Fixed.cpp \

OBJ	= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): 
	$(CLANG) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re:	fclean all