/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_is_empty.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:01:05 by ekrebs            #+#    #+#             */
/*   Updated: 2024/07/28 20:40:15 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../stack.h"

/*
returns 1 if stack is empty
returns 0 if not 
returns -1 if failure;
*/
int ft_stack_is_empty(t_stk *stk)
{
	if (!stk)
		return (-1);
	if(stk->top == NULL)
		return (1);
	return (0);
}
