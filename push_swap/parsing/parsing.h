/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m0rgenstern <m0rgenstern@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 13:53:12 by m0rgenstern       #+#    #+#             */
/*   Updated: 2024/08/18 15:34:48 by m0rgenstern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
# define PARSING_H

#include "../errors.h"
#include "limits.h"

/* main functions */
int	ft_parsing(int argc, char *argv[]);
int	ft_no_doubles(char *argv[], int *error);
int	ft_verif_is_nb_and_int(char *value);

/* utils */
int	ft_atoi(const char *s, int *error);
#endif