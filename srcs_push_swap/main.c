/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 16:51:50 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/19 18:04:08 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

static t_exit_status	ft_sort(t_stack *a, t_stack *b)
{
	if (!ft_stack_is_sorted(a))
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
	//char	**args;
	int		err;
	int		i = 0;

	err = 0;
	stk_a = NULL;
	err = ft_parsing(argc, argv, stk_a);
	if (!stk_a)
		return (write(2, "Error\n", 6), ERR_PARSING);
	if (err)
		return (ft_stack_free(stk_a), write(2, "Error\n", 6), ERR_PARSING);
	// stk_b = ft_stack_create();
	// if (!stk_b)
	// 	return (ft_stack_free(stk_a), write(2, "Error\n", 6), ERR_PARSING);
	// err = ft_sort(stk_a, stk_b);
	// ft_stack_free(stk_a);
	// ft_stack_free(stk_b);
	// if (err)
	// 	return (err);
    return (SUCCESS);
}
