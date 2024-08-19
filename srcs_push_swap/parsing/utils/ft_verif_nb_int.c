/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_nb_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 16:32:15 by m0rgenstern       #+#    #+#             */
/*   Updated: 2024/08/18 15:41:41 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"

int	ft_verif_nb_int(char *value)
{
	if (!value)
		return (ERR);
	if (ft_is_number(value) != 1)
		return (ERR);
	if (ft_is_integer(value) != SUCCESS)
		return (ERR);
	return (SUCCESS);
}
