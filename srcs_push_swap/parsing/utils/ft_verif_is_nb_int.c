/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_is_nb_int.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 16:32:15 by m0rgenstern       #+#    #+#             */
/*   Updated: 2024/08/19 18:04:08 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../parsing.h"

int	ft_verif_is_nb_int(char *value)
{
	int error;

	error = 0;
	if (!value)
		return (ERR);
	if (ft_is_number(value) != 1)
		return (ERR);
	if (ft_is_integer(value, &error) != SUCCESS || error)
		return (ERR);
	return (SUCCESS);
}
