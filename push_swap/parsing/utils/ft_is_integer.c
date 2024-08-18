/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_integer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 14:58:14 by m0rgenstern       #+#    #+#             */
/*   Updated: 2024/08/18 15:07:03 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"

static char	*trim_sign_and_zeros(char *value, int *psign)
{
	int	i;

	i = 0;
	if (value[0] == '-' || value[0] == '+')
	{
		i++;
		if (value[0] == '-')
			*psign = -1;
		else
			*psign = 1;
	}
	while (value[i] == '0' && value [i + 1] != '\0')
		i++;
	return (ft_substr(value, i, ft_strlen(value)));
}

static int	ft_is_integer(char *str_nb, int *error)
{
	long	value;
	int		len;
	int		sign;

	*error = 0;
	sign = 1;
	str_nb = trim_sign_and_zeros(str_nb, &sign);
	if (!str_nb)
		return (ERR);
	len = ft_strlen(str_nb);
	if (len > 10)
		return (ERR);
	if (len == 10)
	{
		value = ft_atoi(str_nb, error);
        if (*error)
            return (free(str_nb), *error = ERR, ERR);
		if (sign == -1)
			value *= -1;
	}
	return (free(str_nb), value);
}
