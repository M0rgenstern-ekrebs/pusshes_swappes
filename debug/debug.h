#ifndef DEBUG_H
# define DEBUG_H

#include "../push_swap/push_swap.h"

/* le but du dossier de debug est de ne pas etre norme', pour une iteration rapide des tests */

// STACK
t_exit_status	ft_stack_print_parcours(t_stack *stk);
t_exit_status	ft_stacks_print(t_stack *stk_a, t_stack *stk_b);

// TESTS
t_exit_status ft_tests(void);

#endif