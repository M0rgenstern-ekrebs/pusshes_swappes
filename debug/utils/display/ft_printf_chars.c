/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_chars.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 15:16:20 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/16 18:13:29 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../debug.h"

void str_printf_chars(char *str)
{
	int i = 0;
	if (!str)
	{
		printf("NULL");
		return ;
	}
	while (str[i])
	{
		if(str[i] == '\n')
			printf("\\n");
		else
			printf("%c", str[i]);
		i++;
	}
	printf("\\0");
}
