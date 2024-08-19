/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:29:52 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/19 18:04:08 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERRORS_H
# define ERRORS_H

# ifndef VERBOSE
#  define VERBOSE 0
# endif

# include <stdlib.h>

typedef enum e_exit_status
{
	SUCCESS = 0,
	ERR = -1,
	ERR_MALLOC = -2,
	ERR_IS_NULL = -3
}	t_exit_status;

enum e_errors
{
	ERR_PARSING = -4,
	ERR_NAN = - 5
};

#endif