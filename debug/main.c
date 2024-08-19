/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 16:24:17 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/19 18:04:08 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "debug.h"

//bit array to select tests
#define TO_TEST 111

int	main(void)
{
	int err;

	title(__FUNCTION__);

	err = 0;
	if (TO_TEST & 0b100)
		if (ft_tests_parsing(&err) != SUCCESS)
			return (ERR);
	if (TO_TEST & 0b010)		
		if (ft_tests_stack(&err) != SUCCESS)
			return (ERR);
	if (TO_TEST & 0b001)				
		if (ft_tests_solver(&err) != SUCCESS)
			return (ERR);

	section(" t'was all the test ! 🌟\n");
	return (SUCCESS);
}