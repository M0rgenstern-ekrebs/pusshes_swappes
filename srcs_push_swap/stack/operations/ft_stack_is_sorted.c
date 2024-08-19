/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_is_sorted.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:57:18 by m0rgenstern       #+#    #+#             */
/*   Updated: 2024/08/18 17:29:58 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stack.h"

static int  is_sorted_ascending(t_stack *stk)
{
	t_node	*top;

	top = stk->top;
	while(top && top->next)
	{
		if(!(top->content <= top->next->content))
			return (0);
		top = top->next;
	}
	return (1);
}

static int  is_sorted_descending(t_stack *stk)
{
	t_node	*top;

	top = stk->top;
	while(top && top->next)
	{
		if(!(top->content >= top->next->content))
			return (0);
		top = top->next;
	}
	return (1);
}

/*
 *  checks if is sorted either ascending or descending
 * 	Returns : 1 if true 0 if false
 *
 */
int ft_stack_is_sorted(t_stack *stk)
{
	if(is_sorted_ascending || is_sorted_descending)
		return (1);
	return (0);
}
