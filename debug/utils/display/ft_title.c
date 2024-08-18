/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_title.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 15:42:00 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/18 07:42:05 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../debug.h"

//TODO - adapt to strlen(str);
void title(char *str)
{
	int nb_spaces;
	int i;

	nb_spaces = 49 - 8 - strlen(str);
	COLOR_TITLE;
	printf("\n╔═══════════════════════════════════════════════╗\n║");
	printf("        🤺 %s 🤺", str);
	while (i < nb_spaces)
		printf(" ");
	printf("║\n╚═══════════════════════════════════════════════╝\n");
	COLOR_DEFAULT;
}