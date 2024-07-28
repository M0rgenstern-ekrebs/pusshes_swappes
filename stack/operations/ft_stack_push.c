/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:01:22 by ekrebs            #+#    #+#             */
/*   Updated: 2024/07/28 20:28:19 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stack.h"



/**
 * removes top of stk_from adds it to top stk_dest;
 * returns SUCCESS (0)
 * returns ERR if failure;
 */
t_exit_status	ft_stack_push(t_stack *stk_from, t_stack *stk_dest)
{
	int				new_content;
	t_exit_status	err;

	if (!stk_from || !stk_from->top || !stk_dest)
		return (ERR);
	new_content = stk_from->top->content;
	err = 0;
	err += ft_stack_delete_node_top(stk_from);
	err += ft_stack_add_node_top(stk_dest, new_content);
	if (err)
		return (ERR);
	return (SUCCESS);
}