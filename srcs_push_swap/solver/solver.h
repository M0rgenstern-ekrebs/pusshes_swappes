/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 11:48:12 by m0rgenstern       #+#    #+#             */
/*   Updated: 2024/08/19 18:04:08 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVER_H
# define SOLVER_H
# include "../stack/stack.h"

void    ft_set_target_nodes(t_stack *stk_a, t_stack *stk_b);
void    ft_set_costs_analysis(t_stack *stk_a);
void    ft_sort_three(t_stack *stk);
void    ft_sort_stacks(t_stack *stk_a, t_stack *stk_b);
#endif