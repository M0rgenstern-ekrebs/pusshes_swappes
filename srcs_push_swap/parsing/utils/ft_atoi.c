/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 16:36:51 by m0rgenstern       #+#    #+#             */
/*   Updated: 2024/08/19 15:04:37 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../parsing.h"

static void	do_sign(const char *s, int *i, int *sign)
{
    if (s[*i] == '-' || s[*i] == '+')
	{
		if (s[*i] == '-')
			*sign *= -1;
		(*i)++;
	}
	return ;
}

int	ft_atoi(const char *s, int *error)
{
	int				i;
	long long		number;
	int				sign;

	number = 0;
	sign = 1;
	i = 0;
	if(!s || s[0] == '\0')
		return (*error = ERR_NAN, ERR_NAN); 
	while (ft_is_space(s[i]))
		i++;
	do_sign(s, &i, &sign);
	while (s[i] && ft_is_digit(s[i]))
	{
		if (i > 10)
			return (*error = ERR, ERR);
		number *= 10;
		number += s[i++] - '0';
	}
	number = sign * number;
	if (number > INT_MAX || number < INT_MIN)
		return (*error = ERR, ERR);
	if (!s[i])
		return ((int) number);
	return (*error = ERR_NAN, ERR_NAN);
}
