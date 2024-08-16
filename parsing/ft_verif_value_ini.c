/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_value_ini.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 16:32:15 by m0rgenstern       #+#    #+#             */
/*   Updated: 2024/08/02 16:54:42 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"

static char	*trim_zero_and_sign(char *value, int *psign)
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

int	ft_verif_integer(char *value)
{
	int	len;
	int	sign;
	int	*psign;
	int	sec;

	sec = 0;
	psign = &sign;
	sign = 1;
	value = trim_zero_and_sign(value, psign);
	if (!value)
		return (-1);
	len = ft_strlen(value);
	if (len > 10)
		return (-1);
	if (len == 10)
	{
		if (sign == 1)
			sec = ft_strncmp("2147483647", value, len);
		else
			sec = ft_strncmp("2147483648", value, len);
	}
	free(value);
	return (sec);
}

int	ft_verif_value_ini(char *value, int *error)
{
	if (!value)
		return (*error = -666, -666);
	if (ft_is_number(value) != 1)
		return (*error = -666, -666);
	if (ft_verif_integer(value) != 0)
		return (*error = -666, -666);
	return (0);
}