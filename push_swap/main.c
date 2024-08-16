/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 16:51:50 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/02 17:01:51 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	int err;

	err = 0;
	err = ft_parsing(argc, argv);
	if (err)
		return (write(2, "Error\n", 6), ERR_PARSING);

    return (err);
}
