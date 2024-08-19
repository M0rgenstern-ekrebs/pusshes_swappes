/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 13:53:12 by m0rgenstern       #+#    #+#             */
/*   Updated: 2024/08/19 18:04:08 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
# define PARSING_H

#include "../stack/stack.h"
#include "../errors.h"
#include "limits.h"

/* main functions */
int		ft_parsing(int argc, char **argv, t_stack *stk);
int		ft_verif_is_nb_int(char *value);

/* utils */
int		ft_no_doubles(char *argv[], int *error);
int		ft_is_digit(int c);
int 	ft_is_number(char *tab);
int		ft_is_integer(char *str_nb, int *error);
int		ft_is_space(char c);
int		ft_atoi(const char *s, int *error);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	**ft_split(char const *s, char const c);
size_t	ft_strlen(const char *s);
#endif