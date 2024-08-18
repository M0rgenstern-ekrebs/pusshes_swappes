NAME = push_swap

SRCS =	\
		push_swap/stack/subject_operations/ft_stack_push.c				\
		push_swap/stack/subject_operations/ft_stack_reverse_rotate.c	\
		push_swap/stack/subject_operations/ft_stack_rotate.c			\
		push_swap/stack/subject_operations/ft_stack_swap.c				\
		push_swap/stack/subject_operations/ft_stacks_rreverse_rrotate.c	\
		push_swap/stack/subject_operations/ft_stacks_rrotate.c			\
		push_swap/stack/subject_operations/ft_stacks_sswap.c			\
		\
		push_swap/stack/operations/ft_stack_add_top.c		\
		push_swap/stack/operations/ft_stack_delete_top.c	\
		push_swap/stack/operations/ft_stack_is_empty.c		\
		push_swap/stack/operations/ft_stack_median.c		\
		\
		push_swap/stack/ft_stack_create.c		\
		push_swap/stack/ft_stack_free.c			\
		\
		\
		push_swap/parsing/ft_parsing.c				\
		push_swap/parsing/ft_check_for_doubles.c	\
		push_swap/parsing/ft_verif_value_ini.c		\
		\
		push_swap/parsing/utils/ft_is_space.c		\
		push_swap/parsing/utils/ft_is_digit.c		\
		push_swap/parsing/utils/ft_is_number.c		\
		push_swap/parsing/utils/ft_atoi.c			\
		push_swap/parsing/utils/ft_strlen.c			\
		push_swap/parsing/utils/ft_strncmp.c		\
		\

PROG = srcs/main.c

TESTS = debug/*.c		\
		debug/*/*.c		\
		debug/*/*.c		\

CFLAGS = -Wall -Wextra -g3 #-fsanitize=address
		
all : $(NAME)

$(NAME) :
	clear && cc $(SRCS) $(CFLAGS) -o $(NAME)

leaks : re
	clear && valgrind ./$(NAME) && cc $(SRCS) $(PROG) $(CFLAGS) -o $(NAME) && ./$(NAME)

INPUTS = 1 2 3 4
debug : fclean
	clear && cc $(SRCS) $(PROG) $(CFLAGS) -o $(NAME)
	./$(NAME) $(INPUTS) || lldb $(NAME) $(INPUTS)

tests : fclean
	clear && cc $(SRCS) $(TESTS) $(CFLAGS) -o $(NAME)
	./$(NAME) || lldb $(NAME)

tests_valgrind : fclean
	clear && cc $(SRCS) $(TESTS) $(CFLAGS) -o $(NAME)
	valgrind --leak-check=full ./a.out

tests_fsanitize : fclean
	clear && cc $(SRCS) $(TESTS) $(CFLAGS) -fsanitize=address -o $(NAME)
	./a.out || lldb a.out

clean :
	rm -rf *.o

fclean : clean
	rm -f $(NAME)

re : fclean all