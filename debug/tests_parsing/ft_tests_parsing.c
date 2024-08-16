/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tests_parsing.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 17:12:18 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/16 17:28:49 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../debug.h"


ft_tests_parsing(int *err)
{
	char are_numbers[][64] = {itoa(1), itoa(INT_MAX), itoa(INT_MIN), itoa(0), itoa(CHAR_MAX * 25), itoa(INT_MAX/2), itoa(INT_MIN/2), " 1234", "1234 "};
	char not_numbers[][64] = {"1E", itoa(INT_MAX + 1), itoa(INT_MIN - 1), "1354 54", "123E4", "123E", "E", "1234567890123" };

	
	return (SUCCESS);
}
