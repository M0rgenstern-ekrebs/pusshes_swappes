/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 17:48:15 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/16 18:13:18 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DISPLAY_H__
# define __DISPLAY_H__

//logic bricks for color handeling
# define COLOR_DEFAULT printf("\033[0m")
# define COLOR_OK COLOR_SUCCESS
# define COLOR_ERR COLOR_ERROR
# define COLOR_INF COLOR_INFO
# define COLOR_WARN COLOR_WARNING
# define COLOR_INFO setcolors(fgGRAY, bgDEFAULT, caNORMAL)
# define COLOR_WARNING setcolors(fgYELLOW, bgDEFAULT, caNORMAL)
# define COLOR_ERROR setcolors(fgLIGHTRED, bgDEFAULT, caNORMAL)
# define COLOR_SUCCESS setcolors(fgLIGHTGREEN, bgDEFAULT, caNORMAL)

# define COLOR_TITLE setcolors(fgGREY, bgDEFAULT, caNORMAL)
# define COLOR_SECTION setcolors(fgGRAY, bgDEFAULT, caNORMAL)
# define COLOR_SUBSECTION setcolors(fgLIGHTBLUE, bgDEFAULT, caNORMAL)

enum ColorAttribute
{
  caNORMAL    = 0,
  caBOLD      = 1,
  caUNDERLINE = 4,
  caBLINKING  = 5,
  caREVERSED  = 7,
  caCONCEALED = 8
};

enum ForegroundColor 
{
  fgBLACK       = 30,
  fgRED         = 31,
  fgGREEN       = 32,
  fgORANGE      = 33,
  fgBLUE        = 34,
  fgPURPLE      = 35,
  fgCYAN        = 36,
  fgGREY        = 37,
  fgGRAY        = 37,
  fgDEFAULT		  = 39,
  fgDARKGREY    = 90,
  fgDARKGRAY    = 90,
  fgLIGHTRED    = 91,
  fgLIGHTGREEN  = 92,
  fgYELLOW      = 93,
  fgLIGHTBLUE   = 94,
  fgLIGHTPURPLE = 95,
  fgTURQUOISE   = 96
};

enum BackgroundColor
{
  bgBLACK       =  40,
  bgRED         =  41,
  bgGREEN       =  42,
  bgORANGE      =  43,
  bgBLUE        =  44,
  bgPURPLE      =  45,
  bgCYAN        =  46,
  bgGREY        =  47,
  bgGRAY        =  47,
  bgDEFAULT		  =  49,
  bgDARKGREY    = 100,
  bgDARKGRAY    = 100,
  bgLIGHTRED    = 101,
  bgLIGHTGREEN  = 102,
  bgYELLOW      = 103,
  bgLIGHTBLUE   = 104,
  bgLIGHTPURPLE = 105,
  bgTURQUOISE   = 106
};

//display functions
void	title(char *str);
void	section(char *str);
void	sub_section(char *str);
void 	space();

#endif