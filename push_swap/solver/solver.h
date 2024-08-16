/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 11:48:12 by m0rgenstern       #+#    #+#             */
/*   Updated: 2024/08/16 11:51:46 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVER_H
# define SOLVER_H
# include "../stack/stack.h"

int ft_find_max(t_stack *stk);
int ft_find_min(t_stack *stk);
int ft_find_median(t_stack *stk);
int ft_stack_length(t_stack *stk);

bool    ft_stack_is_sorted(t_stack *stk);
void    ft_set_target_nodes(t_stack *stk_a, t_stack *stk_b);
void    ft_set_cost_analysis_target_nodes(t_stack *stk_a);
void    ft_sort_three(t_stack *stk);
void    ft_sort_stacks(t_stack *stk_a, t_stack *stk_b);
#endif