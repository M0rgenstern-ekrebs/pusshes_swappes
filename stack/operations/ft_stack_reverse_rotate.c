/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_reverse_rotate.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:01:20 by ekrebs            #+#    #+#             */
/*   Updated: 2024/07/28 19:52:54 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stack.h"

/**
 * rotates the stack stk <==
 * returns 0 is SUCCESS
 * returns ERR if failure
 */
t_exit_status	ft_stack_reverse_rotate(t_stack *stk)
{
	t_node	*first;
	t_node	*bottom;

	if (!stk || !stk->top)
		return (ERR);
	first = stk->top;
	bottom = first->prev;
	stk->top = bottom;
	return (SUCCESS);
}