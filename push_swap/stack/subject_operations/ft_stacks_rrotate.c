/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacks_rrotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:01:11 by ekrebs            #+#    #+#             */
/*   Updated: 2024/07/28 19:47:03 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stack.h"

/**
 * rotates the stacks stk_a and stk_b, both respectively ==>
 * returns 0 is SUCCESS
 * returns ERR if failure
 */
t_exit_status	ft_stacks_rrotate(t_stack *stk_a, t_stack *stk_b)
{
	t_exit_status err;

	err = 0;
	err += ft_stack_rotate(stk_a);
	err += ft_stack_rotate(stk_b);
	if (err)
		return (ERR);
	return (SUCCESS);
}