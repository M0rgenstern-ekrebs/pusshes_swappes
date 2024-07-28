/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_add_node_top.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:00:59 by ekrebs            #+#    #+#             */
/*   Updated: 2024/07/28 20:39:57 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../stack.h"

/**
 * returns 0 (SUCCESS) if added content to stack
 * returns ERR_MALLOC in case of failure
 */
t_exit_status	ft_stack_add_node_top(t_stack *stk, int content)
{
	t_node *top;
	t_node *new;
	t_node *bottom;

	if (!stk)
		return (ERR);
	top = stk->top;
	new = malloc(sizeof(t_node));
	if(!new)
		return (ERR_MALLOC);
	new->content = content;
	if (!stk->top)
	{
		new->next = new;
		new->prev = new;
		return (SUCCESS);
	}
	bottom = top->prev;

	new->next = top;
	new->prev = bottom;

	bottom->next = new;
	top->prev = new;
	return (SUCCESS);
}