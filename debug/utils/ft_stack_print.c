/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 19:57:34 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/16 16:27:45 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "debug.h"


/**
 * prints the node content
 */
t_exit_status	ft_stack_print_parcours(t_stack *stk)
{
	t_node	*node;

	if (!stk)
		return(ERR);
	
	node = stk->top;
	if (!node)
	{
		printf("\nNULL (le stack est vide)");
		return (SUCCESS);
	}

	printf("\n [parcours ->]");
	printf("\n\tTop\n\t");
	printf("-%d]->[%d", node->content, node->next->content);
	node = node->next;
	while(node && node != stk->top)
	{
		printf("-%d]->[%d", node->content, node->next->content);
		node = node->next;
	}
	printf("\n\t________\n");


	printf("\n [parcours <-]");
	printf("\n\tTop\n\t");
	printf("-%d]<-[%d", node->content, node->prev->content);
	node = node->prev;
	while(node && node != stk->top)
	{
		printf("-%d]<-[%d", node->content, node->prev->content);
		node = node->prev;
	}
	printf("\n\t________");
	return (SUCCESS);
}

t_exit_status	ft_stacks_print(t_stack *stk_a, t_stack *stk_b)
{
	t_node	*node_a;
	t_node	*node_b;

	if (!stk_a || !stk_b)
		return(ERR);
	
	node_a = stk_a->top;
	node_b = stk_b->top;

	printf("______ A _________ B ______\n");
	if (!node_a)
		printf("\tA empty");
	if (!node_a)
		printf("\tB empty\n");

	printf("\t%d ; %d", node_a->content, node_a->next->content);
	printf("    |    %d ; %d\t(top)\n", node_b->content, node_b->next->content);
	node_a = node_a->next;
	node_b = node_b->next;
	while ((node_a || node_b) && (node_a != stk_a->top || node_b != stk_b->top))
	{
		if (node_a && node_a != stk_a->top)
		{
			printf("\t%d ; %d", node_a->content, node_a->next->content);
			node_a = node_a->next;
		}
		if (node_b && node_b != stk_b->top)
		{
			printf("    |    %d ; %d\n", node_b->content, node_b->next->content);
			node_b = node_b->next;
		}
	}
	printf("\t(bottom)");
	printf("\n\t________\n");

	return (SUCCESS);
}
