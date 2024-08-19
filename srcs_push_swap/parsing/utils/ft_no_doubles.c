/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_no_doubles.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 16:33:29 by m0rgenstern       #+#    #+#             */
/*   Updated: 2024/08/19 15:05:32 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../parsing.h"

int	ft_no_doubles(char *argv[], int *error)
{
	int	i;
	int	j;

	j = 1;
	i = 1;
	while (argv[i])
	{
		while (argv[j])
		{
			if (ft_atoi(argv[i], error) == ft_atoi(argv[j], error) || *error)
				return (ERR);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (SUCCESS);
}
