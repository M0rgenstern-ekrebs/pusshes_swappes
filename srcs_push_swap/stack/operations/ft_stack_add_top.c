/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_add_top.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:00:59 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/19 03:02:01 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stack.h"

/**
 * returns 0 (SUCCESS) if added content to stack
 * returns ERR_MALLOC in case of failure
 */
t_exit_status	ft_stack_add_top(t_stack *stk, int content)
{
	t_node *top;
	t_node *new;
	t_node *bottom;

	if (!stk)
		return (ERR);
	top = stk->top;
	new = malloc(sizeof(t_node));
	if(!new)
		return (ERR);
	new->content = content;
	stk->nb++;
	if (!stk->top)
	{
		new->next = new;
		new->prev = new;
		new->index = 0;
		return (SUCCESS);
	}
	bottom = top->prev;

	new->next = top;
	new->prev = bottom;

	bottom->next = new;
	top->prev = new;

	new->index = new->prev->index + 1;


	return (SUCCESS);
}
