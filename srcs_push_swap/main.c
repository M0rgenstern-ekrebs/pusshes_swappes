/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 16:51:50 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/19 03:07:50 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_exit_status	ft_sort(t_stack *a, t_stack *b)
{
	if (!stack_sorted(a))
	{
		if (ft_stack_length(a) == 2)
			ft_stack_swap(a);
		else if (ft_stack_length(a) == 3)
			ft_sort_three(a);
		else
			ft_sort_stacks(a, b);
	}
	return (SUCCESS);
}

int	main(int argc, char *argv[])
{
	t_stack *stk_a;
	t_stack *stk_b;
	char	**args;
	int		err;

	err = 0;
	err = ft_parsing(argc, argv, stk_a);
	if (!stk_a)
		return (write(2, "Error\n", 6), ERR_PARSING);
	if (err)
		return (ft_stack_free(stk_a), write(2, "Error\n", 6), ERR_PARSING);
	stk_b = ft_stack_create();
	if (!stk_b)
		return (ft_stack_free(stk_a), write(2, "Error\n", 6), ERR_PARSING);
	err = ft_sort(stk_a, stk_b);
	ft_stack_free(stk_a);
	ft_stack_free(stk_b);
	if (err)
		return (err);
    return (SUCCESS);
}
