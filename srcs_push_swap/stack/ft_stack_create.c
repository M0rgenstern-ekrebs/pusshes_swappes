/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_create.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 16:53:16 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/18 13:42:20 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

/**
 * returns address stack created 
 * NULL in case of failure
 */
t_stack	*ft_stack_create(void)
{
	t_stack	*new;
	new = malloc(sizeof(t_stack));
	if (!new)
		return(NULL);
	new->top = NULL;
	new->nb = 0;
	return (new);
}