/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:22:08 by m0rgenstern       #+#    #+#             */
/*   Updated: 2024/08/19 18:04:08 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stack/stack.h"

/**
 * 
 * if => 210
 * else => 201
 */
static void	case_ind_max_0(t_stack *stk)
{
	t_node	*n0;
	t_node	*n1;
	t_node	*n2;

	n0 = stk->top;
	n1 = stk->top->next;
	n2 = stk->top->next->next;
	if(n1->content > n2->content)
	{
		return ;
	}
	else
	{
		ft_stack_swap(stk);
		ft_stack_reverse_rotate(stk);
	}
}

/**
 * 
 * if => 120
 * else => 021
 */
static void	case_ind_max_1(t_stack *stk)
{
	t_node	*n0;
	t_node	*n1;
	t_node	*n2;

	n0 = stk->top;
	n1 = stk->top->next;
	n2 = stk->top->next->next;
	if(n0->content > n2->content)
	{
		ft_stack_swap(stk);
	}
	else
	{
		ft_stack_reverse_rotate(stk);
	}
}

/**
 * 
 * if => 102
 * else =>012
 */
static void	case_ind_max_2(t_stack *stk)
{
	t_node	*n0;
	t_node	*n1;
	t_node	*n2;

	n0 = stk->top;
	n1 = stk->top->next;
	n2 = stk->top->next->next;
	if(n0->content > n1->content)
	{
		ft_stack_rotate(stk);
	}
	else
	{
		ft_stack_swap(stk);
		ft_stack_rotate(stk);
	}
}

void	ft_sort_three(t_stack *stk)
{
    int	ind_max;

    ind_max = ft_stack_ind_max(stk);
    if (ind_max == 0)
		case_ind_max_0(stk);
    else if (ind_max == 1)
		case_ind_max_1(stk);
    else if (ind_max == 2)
		case_ind_max_2(stk);
}
