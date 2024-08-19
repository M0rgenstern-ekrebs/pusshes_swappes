/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_is_sorted.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:57:18 by m0rgenstern       #+#    #+#             */
/*   Updated: 2024/08/19 18:04:08 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stack.h"

static int  is_sorted_ascending(t_stack *stk)
{
	t_node	*top;
	t_node	*tmp;
	t_node	*last;

	top = stk->top;
	last = top->prev;
	tmp = top;
	while(tmp != last)
	{
		if(!(tmp->content <= tmp->next->content))
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

/*
 *  checks if is sorted in ascending order
 * 	Returns : 1 if true 0 if false
 *
 */
int	ft_stack_is_sorted(t_stack *stk)
{
	if (is_sorted_ascending(stk))
		return (1);
	return (0);
}
