
#include "./srcs_push_swap/push_swap.h"

void test(t_stack *a, t_stack *b)
{

}

int main(int argc, char *argv[])
{
	t_stack *stk_a;
	t_stack *stk_b;
	int		err;

	err = 0;
	stk_a = NULL;
	err = ft_parsing(argc, argv, stk_a);
	if (!stk_a)
		return (write(2, "Error\n", 6), ERR_PARSING);
	// if (err)
	// 	return (ft_stack_free(stk_a), write(2, "Error\n", 6), ERR_PARSING);
	// stk_b = ft_stack_create();
	// if (!stk_b)
	// 	return (ft_stack_free(stk_a), write(2, "Error\n", 6), ERR_PARSING);
	// // err = ft_sort(stk_a, stk_b);
	// ft_stack_free(stk_a);
	// ft_stack_free(stk_b);
	// if (err)
	// 	return (err);
    return (SUCCESS);
}