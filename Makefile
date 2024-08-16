NAME = push_swap

SRCS =	main.c	\
		\
		stack/operations/ft_stack_push.c				\
		stack/operations/ft_stack_reverse_rotate.c		\
		stack/operations/ft_stack_rotate.c				\
		stack/operations/ft_stack_swap.c				\
		stack/operations/ft_stacks_rreverse_rrotate.c	\
		stack/operations/ft_stacks_rrotate.c			\
		stack/operations/ft_stacks_sswap.c				\
		\
		stack/utils/node/ft_node_free.c				\
		stack/utils/node/ft_stack_add_node_top.c	\
		stack/utils/node/ft_stack_delete_node_top.c	\
		\
		stack/utils/stack/ft_stack_create.c		\
		stack/utils/stack/ft_stack_free.c		\
		stack/utils/stack/ft_stack_is_empty.c	\
		\
		parsing/ft_parsing.c			\
		parsing/ft_check_for_doubles.c	\
		parsing/ft_verif_valur_ini.c	\
		\
		parsing/utils/ft_is_space.c		\
		parsing/utils/ft_is_digit.c		\
		parsing/utils/ft_is_number.c	\
		parsing/utils/ft_atoi.c			\
		parsing/utils/ft_strlen.c		\
		parsing/utils/ft_strncmp.c		\
		\

PROG = srcs/push_swap.c

TESTS = debug/tests/*.c		\
		debug/utils/*/*.c	\

CFLAGS = -Wall -Wextra -fsanitize=address
		
all : $(NAME)

$(NAME) :
	clear && cc $(SRCS) $(CFLAGS) -o $(NAME)

leaks : re
	clear && valgrind ./$(NAME) && cc $(SRCS) $(PROG) -Wextra -Wall -fsanitize=address -o $(NAME) && ./$(NAME)

INPUTS = 1 2 3 4
debug : fclean
	clear && cc $(SRCS) $(PROG) -Wextra -Wall -g3 -o $(NAME)
	./$(NAME) $(INPUTS) || lldb $(NAME) $(INPUTS)

tests : fclean
	clear && cc $(SRCS) $(TESTS) -Wextra -Wall -g3 -o $(NAME)
	./$(NAME) || lldb $(NAME)

tests_valgrind : fclean
	clear && cc $(SRCS) $(TESTS) -Wextra -Wall -g3 -o $(NAME)
	valgrind --leak-check=full ./a.out

tests_fsanitize : fclean
	clear && cc $(SRCS) $(TESTS) -Wextra -Wall -g3 -fsanitize=address -o $(NAME)
	./a.out || lldb a.out

clean :
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)

re : fclean all