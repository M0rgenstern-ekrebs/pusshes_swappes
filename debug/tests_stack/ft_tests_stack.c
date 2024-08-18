/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tests_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 17:13:38 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/18 09:20:50 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../debug.h"

static t_stack *ini_stk1_for_me(t_stack	*stk1)
{
	stk1 = ft_stack_create();
	ft_stack_add_top(stk1, 01);
	ft_stack_add_top(stk1, 02);
	ft_stack_add_top(stk1, 03);
	ft_stack_add_top(stk1, 04);
	return (stk1);
}

static t_stack *ini_stk2_for_me(t_stack	*stk2)
{
	stk2 = ft_stack_create();
	ft_stack_add_top(stk2, 55);
	ft_stack_add_top(stk2, 66);
	ft_stack_add_top(stk2, 77);
	ft_stack_add_top(stk2, 88);
	return (stk2);
}

static t_exit_status test_push()
{
	t_stack	*stk1;
	t_stack *stk2;

	sub_section(__FUNCTION__);
	stk1 = ini_stk1_for_me(stk1);
	stk2 = ini_stk2_for_me(stk2);
	
	ft_stacks_print(stk1, stk2);
	ft_stack_push(stk2, stk1);
	ft_stack_push(stk2, stk1);
	
	ft_stacks_print(stk1, stk2);
	ft_stack_print_parcours(stk1);

	ft_stack_push(stk1, stk2);

	ft_stack_free(stk1);
	ft_stack_free(stk2);
	return (SUCCESS);

}
static t_exit_status test_swap()
{
	t_stack	*stk1;
	t_stack *stk2;

	sub_section(__FUNCTION__);
	stk1 = ini_stk1_for_me(stk1);
	stk2 = ini_stk2_for_me(stk2);
	


	ft_stack_free(stk1);
	ft_stack_free(stk2);
	return (SUCCESS);

}

static t_exit_status test_rotate()
{
	t_stack	*stk1;
	t_stack *stk2;

	sub_section(__FUNCTION__);
	stk1 = ini_stk1_for_me(stk1);
	stk2 = ini_stk2_for_me(stk2);
	


	ft_stack_free(stk1);
	ft_stack_free(stk2);
	return (SUCCESS);
}
static t_exit_status test_reverse_rotate()
{
	t_stack	*stk1;
	t_stack *stk2;

	sub_section(__FUNCTION__);
	stk1 = ini_stk1_for_me(stk1);
	stk2 = ini_stk2_for_me(stk2);
	


	ft_stack_free(stk1);
	ft_stack_free(stk2);
	return (SUCCESS);
}

static t_exit_status test_suject_operations()
{
	section(__FUNCTION__);
	if (test_push != SUCCESS)
		return (ERR);
	if (test_swap != SUCCESS)
		return (ERR);
	if (test_rotate != SUCCESS)
		return (ERR);
	if (test_reverse_rotate != SUCCESS)
		return (ERR);
	return (SUCCESS);
}

//=====================================================

static t_exit_status test_is_empty()
{

}

static t_exit_status test_median()
{

}

static t_exit_status test_operations()
{
	section(__FUNCTION__);
	if (test_is_empty() != SUCCESS)
		return (ERR);
	if (test_median() != SUCCESS)
		return (ERR);
	return (SUCCESS);
}

//======================================================

t_exit_status ft_tests_stack(int *err)
{
	section(__FUNCTION__);
	if (test_suject_operations() != SUCCESS)
		return (ERR);
	if (test_operations() != SUCCESS)
		return (ERR);
	return (SUCCESS);
}