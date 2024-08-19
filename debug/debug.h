#ifndef DEBUG_H
# define DEBUG_H

#include "../srcs_push_swap/push_swap.h"
#include "./utils/display/display.h"
#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

typedef union u_buf64
{
	unsigned long long	raw_value;
	bool				bits[64];
} buffer64, buf64;

typedef enum e_data_types 
{
	T_INT = 0,
	T_CHAR,
	T_PTR,
	T_STRING,
	T_LONG_LONG,
	T_U_LONG_LONG,
	T_BOOL,
	T_BOOL_TABLE
} t_data_types;

/* le but du dossier de debug est de ne pas etre norme', pour une iteration rapide des tests */

// STACK
t_exit_status	ft_stack_print_parcours(t_stack *stk);
t_exit_status	ft_stacks_print(t_stack *stk_a, t_stack *stk_b);

// TESTS
t_exit_status	ft_main_tests(void);

#endif