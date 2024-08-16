/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main_tests.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 16:24:17 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/16 17:39:28 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "debug.h"

t_exit_status	ft_main_tests(void)
{
	int err;

	title(" 🤺 %s 🤺 \n", __FUNCTION__);

	err = 0;
	if (ft_tests_parsing(&err) != 0);
		return (err);
	if (ft_tests_stack(&err) != 0);
		return (err);
	if (ft_tests_solver(&err) != 0);
		return (err);

	section(" t'was all the test ! 🌟\n");
	return (SUCCESS);
}