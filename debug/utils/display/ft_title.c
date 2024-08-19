/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_title.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 15:42:00 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/19 18:04:08 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../debug.h"

static int	ft_display_strlen(const char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

//TODO - adapt to strlen(str);
void title(const char *str)
{
	int	nb_spaces;
	int	i;

	i = 0;
	nb_spaces = 49 - 8 - ft_display_strlen(str);
	COLOR_TITLE;
	printf("\n╔═══════════════════════════════════════════════╗\n║");
	printf("        🤺 %s 🤺", str);
	while (i < nb_spaces)
		printf(" ");
	printf("║\n╚═══════════════════════════════════════════════╝\n");
	COLOR_DEFAULT;
}