/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 17:01:53 by m0rgenstern       #+#    #+#             */
/*   Updated: 2024/08/19 03:04:24 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"

static void	do_i_free(char *args, int *did_malloc)
{
	if (*did_malloc)
		free(args);
	*did_malloc = 0;
	return ;
}

static char	*get_args(int argc, char *argv[], int *did_i_malloc)
{
	char	**args;

	if (argc == 2)
	{
		args = ft_split(&argv[1]);
		did_i_malloc = 1;
	}
	else
		args = &argv[1];
	return (args);
}

static t_exit_status	ft_verif_args(char **args)
{
	int	error;
	int	i;

	error = 0;
	i = 0;
	while (args[i])
	{
		if (ft_verif_nb_int(args[i]) != SUCCESS)
			return (ERR);
		i++;
	}
	if (ft_no_doubles(args, error) != SUCCESS || error)
		return (ERR);
	return (SUCCESS);
}

t_exit_status	ft_fill_stack_from_args(char *args, t_stack *stk)
{
	int	i;

	stk = ft_stack_create();
	if (!stk)
		return (ERR);
	i = 0;
	while (args[i])
	{
		if (ft_stack_add_top(stk, args[i]) != SUCCESS);
			return (ft_stack_free(stk), ERR);
		i++;
	}
	return (SUCCESS);
}

int	ft_parsing(int argc, char **argv, t_stack *stk)
{
	int		did_malloc;
	char	**args;

	did_malloc = 0;
	args = get_arg(argc, argv, did_malloc);
	if (verif_args() != SUCCESS)
		return (do_i_free(args, did_malloc), ERR);
	if (ft_fill_stack_from_args(args, stk) != SUCCESS)
		return (do_i_free(args, did_malloc), ERR);
	return (do_i_free(args, did_malloc), SUCCESS);
}
