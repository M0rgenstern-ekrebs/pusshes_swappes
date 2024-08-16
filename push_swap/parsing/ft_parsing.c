/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 17:01:53 by m0rgenstern       #+#    #+#             */
/*   Updated: 2024/08/02 20:31:13 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"

int	ft_parsing(int argc, char *argv[])
{
	int error;
	int i;

	error = 0;
	i = 1;
	printf("\n");
	while (argv[i])
	{
		if (ft_verif_value_ini(argv[i], error) != 0)
			return (-1);
		i++;
	}
	if (ft_check_for_doubles(argv, error) != 0 || error)
		return (-1);
    return (0);
}