/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setcolors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 15:30:23 by ekrebs            #+#    #+#             */
/*   Updated: 2023/12/17 15:47:52 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../debug.h"

void setcolors(int foreground, int background, int attribute)
{
  printf("\033[%i;%i;%im", attribute, foreground, background);  
}