NAME = push_swap

SRCS =	\
		srcs_push_swap/stack/subject_operations/ft_stack_push.c				\
		srcs_push_swap/stack/subject_operations/ft_stack_reverse_rotate.c	\
		srcs_push_swap/stack/subject_operations/ft_stack_rotate.c			\
		srcs_push_swap/stack/subject_operations/ft_stack_swap.c				\
		srcs_push_swap/stack/subject_operations/ft_stacks_rreverse_rrotate.c	\
		srcs_push_swap/stack/subject_operations/ft_stacks_rrotate.c			\
		srcs_push_swap/stack/subject_operations/ft_stacks_sswap.c			\
		\
		srcs_push_swap/stack/operations/ft_stack_add_top.c					\
		srcs_push_swap/stack/operations/ft_stack_delete_top.c				\
		srcs_push_swap/stack/operations/ft_stack_is_empty.c					\
		srcs_push_swap/stack/operations/ft_stack_ind_max.c					\
		srcs_push_swap/stack/operations/ft_stack_ind_min.c					\
		srcs_push_swap/stack/operations/ft_stack_is_sorted.c					\
		srcs_push_swap/stack/operations/ft_stack_length.c					\
		srcs_push_swap/stack/operations/ft_stack_median.c					\
		\
		srcs_push_swap/stack/ft_stack_create.c								\
		srcs_push_swap/stack/ft_stack_free.c									\
		\
		\
		srcs_push_swap/parsing/ft_parsing.c					\
		\
		srcs_push_swap/parsing/utils/ft_check_for_doubles.c	\
		srcs_push_swap/parsing/utils/ft_verif_nb_int.c		\
		srcs_push_swap/parsing/utils/ft_is_space.c			\
		srcs_push_swap/parsing/utils/ft_is_digit.c			\
		srcs_push_swap/parsing/utils/ft_is_number.c			\
		srcs_push_swap/parsing/utils/ft_atoi.c				\
		srcs_push_swap/parsing/utils/ft_strlen.c				\
		srcs_push_swap/parsing/utils/ft_strncmp.c			\
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