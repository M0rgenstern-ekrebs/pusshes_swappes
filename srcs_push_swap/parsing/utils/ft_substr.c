/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 15:35:02 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/19 18:04:08 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../parsing.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	end;
	size_t			i;
	size_t			size;
	char			*new;

	if (!s)
		return (NULL);
	end = ft_strlen(s);
	if (end <= start || end == 0)
		len = 0;
	size = len + 1;
	if (end - start < len)
		size = end - start + 1;
	new = malloc((size) * sizeof(char));
	if (!new)
		return (NULL);
	i = 0;
	while (s[i] && i < end && i < len)
	{
		new[i] = s[start + i];
		i++;
	}
	new[i] = '\0';
	return (new);
}