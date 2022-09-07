SRCS	=	main.c \
			backtracking.c \
			check.c \
			get_grid.c \
			file_to_grid.c \
			cpy_grid.c \
			print_grid.c \

HEADER	=	./includes
NAME	=	sudoku
COMPIL	=	gcc
CFLAGS	=	-Wall -Wextra -Werror
OBJS	=	$(SRCS:.c=.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(COMPIL) $(OBJS) -o $(NAME)

%.o:%.c
		gcc $(CFLAGS) -I$(HEADER) -c $^ -o $@
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: clean all

.PHONY: all clean fclean re
