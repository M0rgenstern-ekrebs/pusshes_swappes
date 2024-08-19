/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_median.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 15:53:21 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/16 16:08:02 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stack.h"

/* returns the mathematical value of the median of the stack
 * example :
 * median(4) = 2.5	:	[_]   [_] | [_]   [_]
 * median(5) = 3	:	[_]   [_]   [|]   [_]   [_]
 */

int ft_stack_median(t_stk *stk)
{
	int n;

	n = stk->nb;
	return ((n / 2) + (n % 2));
}