/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 17:01:53 by m0rgenstern       #+#    #+#             */
/*   Updated: 2024/08/18 15:41:58 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"

static void	do_i_free(char *arg, int did_malloc)
{
	if (did_malloc)
		free(arg);
	return ;
}

static char	*get_arg(int argc, char *argv[], int *did_i_malloc)
{
	char	*arg;

	if (argc == 2)
	{
		arg = ft_split(&argv[1]);
		did_i_malloc = 1;
	}
	else
		arg = &argv[1];
	return (arg);
}

int	ft_parsing(int argc, char *argv[])
{
	int		error;
	int		did_malloc;
	char	*arg;
	int		i;

	error = 0;
	did_malloc = 0;
	arg = get_arg(argc, argv, did_malloc);
	i = 0;
	printf("\n");
	while (arg[i])
	{
		if (ft_verif_nb_int(arg[i]) != SUCCESS)
			return (do_i_free(arg, did_malloc), ERR);
		i++;
	}
	if (ft_no_doubles(arg, error) != SUCCESS || error)
		return (do_i_free(arg, did_malloc), ERR);
	return (do_i_free(arg, did_malloc), SUCCESS);
}
