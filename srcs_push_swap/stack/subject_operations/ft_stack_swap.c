/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:01:16 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/16 14:50:01 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stack.h"

/**
 * swaps first and second content value of stk
 * returns SUCESS (0)
 * returns ERR_IS_NULL if failure
 */
t_exit_status		ft_stack_swap(t_stack *stk)
{
	t_node	*first;
	t_node	*second;
	int		tmp;

	if (!stk || !stk->top)
		return (ERR_IS_NULL);
	first = stk->top;
	second = first->next;
	if (first == second)
		return (SUCCESS);
	tmp = first->content;
	first->content = second->content;
	second->content = tmp;
	return (SUCCESS);
}