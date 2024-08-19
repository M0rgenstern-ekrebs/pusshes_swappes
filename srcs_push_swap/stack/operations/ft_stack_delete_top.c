/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_delete_top.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 18:29:28 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/18 13:42:07 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stack.h"

/**
 * returns 0 (SUCCESS) if added content to stack
 * returns ERR in case of failure
 */
t_exit_status	ft_stack_delete_top(t_stack *stk)
{
	t_node *first;
	t_node *second;
	t_node *bottom;

	if (!stk || !stk->top || !stk->top->next || !stk->top->prev)
		return (ERR);
	first = stk->top;
	second = first->next;
	bottom = first->prev;
	stk->nb--;
	if (first == second)
	{
		ft_node_free(first);
		return (SUCCESS);
	}
	ft_node_free(first);
	second->prev = bottom;
	bottom->next = second;
	return (SUCCESS);
}