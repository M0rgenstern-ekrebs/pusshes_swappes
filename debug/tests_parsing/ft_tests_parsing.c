/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tests_parsing.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 17:12:18 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/19 18:04:08 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../debug.h"

#define STR_LEN 64
t_exit_status	ft_test_numbers(int *err)
{
	char	are_numbers[][STR_LEN] = {"1", itoa(INT_MAX), itoa(INT_MIN), "0", itoa(CHAR_MAX * 25), itoa(INT_MAX/2), itoa(INT_MIN/2), " 1234", "2678 "};
	char	not_numbers[][STR_LEN] = {"1E", itoa(INT_MAX + 1), itoa(INT_MIN - 1), "2354 54", "323E4", "423E", "E", "6234567890123" };
	int		i;
	
	section(__FUNCTION__);
	i = 0;
	while (are_numbers[i])
	{
		*err = ft_check(ft_verif_value_ini(are_numbers[i]), SUCCESS, T_INT, sizeof(int));
		i++;
	}
	i = 0;
	while (not_numbers[i])
	{
		*err = ft_check(ft_verif_value_ini(not_numbers[i]), ERR, T_INT, sizeof(int));
		i++;
	}
	if (*err)
		return (*err);
	return (SUCCESS);
}

#define ARGC_SPLIT	2
#define ARGC_ARGV	10
//argc > 2 fir argv reading,  argc == 2 for split reading
t_exit_status	ft_test_ft_parsing(int *err)
{
	char	ok_pos[] = {"123", "0", "1324 ", " 4356", "3245",  itoa(INT_MAX)};
	char	ok_neg[] = {"-123", "-2435", "1324", "-4356", "3245", itoa(INT_MIN)};
	char	ok_split[] = {"11111 2222 3333  4444  55 6666 0 -7 -88  "};

	char	ko_not_nb[] = {"1324", "4356", "3245", itoa(INT_MAX + 1)};
	char	ko_double[] = {"666", "123", "666", "345"};
	char	ko_split[] = {"111 2 333 4444 555 111 6666"};

	t_stack *a;

	section(__FUNCTION__);
	*err = 0;
	*err = ft_check(ft_parsing(ARGC_ARGV, ok_pos, a), SUCCESS, T_INT, sizeof(int));
	//stack_display
	ft_stack_free(a);
	*err += ft_check(ft_parsing(ARGC_ARGV, ok_neg, a), SUCCESS, T_INT, sizeof(int));
	ft_stack_free(a);
	*err += ft_check(ft_parsing(ARGC_SPLIT, ok_split, a), SUCCESS, T_INT, sizeof(int));
	ft_stack_free(a);

	*err += ft_check(ft_parsing(ARGC_ARGV, ko_not_nb, a), ERR, T_INT, sizeof(int));
	ft_stack_free(a);
	*err += ft_check(ft_parsing(ARGC_ARGV, ko_double, a), ERR, T_INT, sizeof(int));
	ft_stack_free(a);
	*err += ft_check(ft_parsing(ARGC_SPLIT, ko_split, a), ERR, T_INT, sizeof(int));
	ft_stack_free(a);
	if (*err)
		return (*err);
	return (SUCCESS);
}

t_exit_status	ft_tests_parsing(int *err)
{
	*err = 0;
	
	section(__FUNCTION__);
	if (ft_test_numbers(&err) != SUCCESS)
		return (*err = ERR, ERR);
	if (ft_test_ft_parsing(&err) != SUCCESS)
		return (*err = ERR, ERR);
	return (SUCCESS);
}