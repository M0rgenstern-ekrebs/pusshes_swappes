/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:01:22 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/19 18:04:08 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stack.h"


// still works if stk_dest only contains one element;
static void push_from(t_stack *stk_from, t_node *pushed)
{
	t_node *first;
	t_node *second;
	t_node *last;

	first = stk_from->top;
	second = stk_from->top->next;
	last = stk_from->top->prev;
	pushed = first;
	
	last->next = second;
	second->prev = last;
	stk_from->top = second;

	return ;
}

// still works if stk_from only contains one element;
static void push_to(t_stack *stk_dest, t_node *pushed)
{
	t_node *first;
	t_node *last;

	first = stk_dest->top;
	last = stk_dest->top->prev;

	stk_dest->top = pushed;
	last->next = pushed;
	first->prev = pushed;

	return ;
}

/**
 * removes top of stk_from adds it to top stk_dest;
 * returns SUCCESS (0)
 * returns ERR if failure;
 */
t_exit_status	ft_stack_push(t_stack *stk_from, t_stack *stk_dest)
{
	t_node *pushed;

	if (!stk_from || !stk_from->top || !stk_dest)
		return (ERR);

	pushed = NULL;
	push_from(stk_from, pushed);
	push_to(stk_dest, pushed);
	stk_from->nb--;
	stk_dest->nb++;
	
	return (SUCCESS);
}