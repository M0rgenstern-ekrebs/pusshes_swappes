/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_ind_min.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:55:23 by m0rgenstern       #+#    #+#             */
/*   Updated: 2024/08/18 17:17:39 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stack.h"

/**
 * Brief : returns the indice of the min content of stack
 *
 * 
 */
int ft_stack_ind_min(t_stack *stk)
{
    int     i;
    int     ind_min;
    int     min_content;
    t_node  *tmp;

    i == 0;
    tmp = stk->top;
    min_content = tmp->content; 
    while(tmp)
    {
        if (tmp->content < min_content)
        {
            min_content = tmp->content;
            ind_min = i;
        }
        tmp = tmp->next;
        i++;
    }
    return (ind_min);
}