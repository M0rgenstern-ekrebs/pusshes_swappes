/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 16:35:23 by m0rgenstern       #+#    #+#             */
/*   Updated: 2024/08/02 20:30:35 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../parsing.h"

int ft_is_number(char *tab)
{
	int i;
	
	i = 0;
	while (tab[i] && ft_is_space(tab[i]))
		i++;
	if (tab[i] == '-' || tab[i] =='+')
		i++;
	if (!tab[i])
		return (0);
	while (tab[i])
	{
		if (!ft_is_digit(tab[i]))
			return (0); 
		i++;
	}
	return (1);
}