/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_reverse_rotate.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:01:20 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/16 14:50:55 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stack.h"

/**
 * rotates the stack stk <==
 * returns SUCCESS (0)
 * returns ERR if failure
 */
t_exit_status	ft_stack_reverse_rotate(t_stack *stk)
{
	t_node	*first;

	if (!stk || !stk->top)
		return (ERR);
	first = stk->top;
	stk->top = first->prev;
	return (SUCCESS);
}