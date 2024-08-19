/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_rotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:01:18 by ekrebs            #+#    #+#             */
/*   Updated: 2024/07/28 19:52:32 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stack.h"

/**
 * rotates the stack stk ==>
 * returns 0 is SUCCESS
 * returns ERR if failure
 */
t_exit_status	ft_stack_rotate(t_stack *stk)
{
	t_node	*first;
	t_node	*second;

	if (!stk || !stk->top)
		return (ERR);
	first = stk->top;
	second = first->next;
	stk->top = second;
	return (SUCCESS);
}