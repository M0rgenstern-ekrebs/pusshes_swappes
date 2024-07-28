/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:29:52 by ekrebs            #+#    #+#             */
/*   Updated: 2024/07/28 19:57:01 by ekrebs           ###   ########.fr       */
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
	ERR,
	ERR_MALLOC,
	ERR_IS_NULL
}	t_exit_status;

#endif