CC = gcc
CFLAGS	= -Wall -Wextra -Werror
LIBC	= ar -rc
RM		= rm -f
NAME	= cub3d
SRC		= main.c \

OBJ	= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re:	fclean all