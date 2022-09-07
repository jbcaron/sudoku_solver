SRCS	=	main.c \
			backtracking.c \
			check.c \
			get_grid.c \
			file_to_grid.c \
			cpy_grid.c \
			print_grid.c \

HEADER	=	./includes
NAME	=	sudoku
NAME_D	=	$(addsuffix _debug,$(NAME))
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
OBJS	=	$(SRCS:.c=.o)


all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(OBJS) -o $(NAME)
	@echo "-----compilation of binary '$(NAME)'-----"

%.o:%.c
		@$(CC) $(CFLAGS) -I$(HEADER) -c $^ -o $@
		@echo "-----compilation of '$^' in '$@'----"
clean:
	@rm -f $(OBJS)
	@echo "-----delation of all objects files-----"
	@rm -f $(NAME_D)
	@echo "-----deletion of binary '$(NAME_D)'-----"

fclean: clean
	@rm -f $(NAME)
	@echo "-----deletion of binary '$(NAME)'-----"

re: clean all

debug:
	@$(CC) $(CFLAGS) -g -O0 -I$(HEADER) $(SRCS) -o $(NAME_D)
	@echo "-----compilation of binary '$(NAME_D)' for debug-----"

.PHONY: all clean fclean re debug
