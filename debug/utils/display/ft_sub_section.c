/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_subsection.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 15:26:07 by ekrebs            #+#    #+#             */
/*   Updated: 2023/12/17 16:10:53 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../debug.h"

void sub_section(char *str)
{
	COLOR_SUBSECTION;
	if (!str)
		printf("\n\n\n\t------------\n");
	else
		printf("\n\n\n\t-----%s-----\n", str);
	COLOR_DEFAULT;
}