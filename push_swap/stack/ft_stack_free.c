/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_free.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:01:02 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/16 16:11:46 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

/*
frees the node
*/
static void	node_free(t_node *node)
{
	free(node);
	node = NULL;
}

/*
frees the stack
*/
void	ft_stack_free(t_stk *stk)
{
	t_node	*here;
	t_node	*next;
	t_node	*prev;

	here = stk->top;
	next = here->next;
	prev = here->prev;
	while(next != NULL)
	{
		ft_node_free(prev);
		here = next;
		next = here->next;
		prev = here->prev;
	}
	ft_node_free(here);
	stk = NULL;
}