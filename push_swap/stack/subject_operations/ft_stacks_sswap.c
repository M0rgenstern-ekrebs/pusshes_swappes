/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacks_sswap.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:01:10 by ekrebs            #+#    #+#             */
/*   Updated: 2024/07/28 19:51:23 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stack.h"

/**
 * swaps first and second content value respectively of stack A and again for stack B
 * returns 0 is SUCCESS
 * returns ERR if failure
 */
t_exit_status		ft_stacks_sswap(t_stack *stk_a, t_stack *stk_b)
{
	t_exit_status	err;

	err = 0;
	err += ft_stack_swap(stk_a);
	err += ft_stack_swap(stk_b);
	if (err)
		return (ERR);
	return (SUCCESS);
}