/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_ind_max.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:55:17 by m0rgenstern       #+#    #+#             */
/*   Updated: 2024/08/18 17:16:51 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stack.h"

/**
 * Brief : returns the indice of the max content of stack
 *
 * 
 */
int ft_stack_ind_max(t_stack *stk)
{
    int     i;
    int     ind_max;
    int     max_content;
    t_node  *tmp;

    i == 0;
    tmp = stk->top;
    max_content = tmp->content; 
    while(tmp)
    {
        if (tmp->content > max_content)
        {
            max_content = tmp->content;
            ind_max = i;
        }
        tmp = tmp->next;
        i++;
    }
    return (ind_max);
}
