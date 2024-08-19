/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 16:50:00 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/19 18:04:08 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# include <stdlib.h>
# include "../errors.h"

typedef struct s_node
{
	int				content;
	int				index;
	int				push_cost;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node, t_nd;

typedef struct s_stack
{
	t_node	*top;
	int		nb;
} t_stack, t_stk;

/* stack operations : */

t_stack				*ft_stack_create(void);
void				ft_stack_free(t_stack *stk);
void				ft_node_free(t_node *node);

t_exit_status		ft_stack_add_top(t_stack *stk, int content);
t_exit_status		ft_stack_delete_top(t_stack *stk);
int					ft_stack_ind_max(t_stack *stk);
int					ft_stack_ind_min(t_stack *stk);
int					ft_stack_is_empty(t_stack *stk);
int					ft_stack_is_sorted(t_stack *stk);
int					ft_stack_length(t_stack *stk);
int					ft_stack_median(t_stack *stk);

/* subject operations : */
t_exit_status		ft_stack_swap(t_stack *stk);
t_exit_status		ft_stacks_sswap(t_stack *stk_a, t_stack *stk_b);
t_exit_status		ft_stack_push(t_stack *stk_from, t_stack *stk_dest);
t_exit_status		ft_stack_rotate(t_stack *stk);
t_exit_status		ft_stacks_rrotate(t_stack *stk_a, t_stack *stk_b);
t_exit_status		ft_stack_reverse_rotate(t_stack *stk);
t_exit_status		ft_stacks_rreverse_rrotate(t_stack *stk_a, t_stack *stk_b);
#endif