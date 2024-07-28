/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_create.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 16:53:16 by ekrebs            #+#    #+#             */
/*   Updated: 2024/07/28 20:40:09 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../stack.h"

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
	return (new);
}