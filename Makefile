SRC = ./src/main.c\
	./src/ft_lstnewb.c\
	./src/ft_lstdeloneb.c\
	./src/line_work.c\
	./src/new_lst.c\
	./src/check_for_comand.c\
	./src/do_echo.c\
	./src/quotes.c\
	./src/do_cd.c\
	./src/do_pwd.c\
	
OBJ = $(SRC:.c=.o)
NAME = minishell
FLAG = clang -g -Wall -Wextra -Werror
LIBFT = ./libft/libft.a
RM = rm -f

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
	$(FLAG) -o $(NAME) $(OBJ) $(LIBFT)

$(LIBFT):
	@$(MAKE) -C libft

clean:
	$(RM) $(OBJ)
	$(RM) ./libft/*.o

fclean: clean	
	$(RM) $(NAME) $(LIBFT)

re: fclean $(NAME)

.PHONY: all clean fclean re libft