/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 17:52:51 by ekrebs            #+#    #+#             */
/*   Updated: 2024/08/19 18:04:08 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../debug.h"

static void	ft_print_bool_table(buf64 *bool_table, int size)
{
	int bits;
	int i;
	
	i = 0;
	bits = size * 8;
	while (i <= bits)
	{
		if (bool_table[i/64].bits[i%64])
			printf("1");
		else
			printf("0");
		if(i % 8 == 0)
			printf("   ");
		else if (i % 4 == 0)
			printf(" ");
		i++;
	}
}

static void	ft_print_char_values_tables(char *char_table, int size)
{
	int i;
	
	i = 0;
	while (i <= size)
	{
		printf("%c", char_table[i]);
		if(i % 8 == 0)
			printf("   ");
		else if (i % 4 == 0)
			printf(" ");
		i++;
	}
}

static void	ft_print_int_values_table(int *int_table, int size)
{
	int bits;
	int i;
	
	i = 0;
	bits = size * 8;
	while (i <= bits)
	{
		printf("%d", int_table[i]);
		if(i % 8 == 0)
			printf("   ");
		else if (i % 4 == 0)
			printf(" ");
		i++;
	}
}

t_exit_status	check(char *got, char *expected, t_data_types type, int size)
{
	int err;
	int got_size;
	int expected_size;

	err = 0;
	got_size = sizeof(got);
	expected_size = sizeof(expected);

	if (type == T_PTR)
	{
		if ((!got && !expected) || (*got == *expected))
		{
			COLOR_OK;
			printf("\tOK\n");
			COLOR_DEFAULT;
		}
	}
	else if (got == expected)
	{
		COLOR_OK;
		printf("\tOK\n");
		COLOR_DEFAULT;
	}
	else
	{
		err = ERR;
		COLOR_ERROR;
		printf("\tKO  ☠ \n");
		if (type == T_INT)
		{
			printf("\t(got      : %d)\n", (int) got);
			printf("\t(expected : %d)\n", (int) expected);
		}
		else if (type == T_CHAR)
		{
			printf("\t(got      : %c)\n", (char) got);
			printf("\t(expected : %c)\n", (char) expected);
		}
		else if (type == T_STRING)
		{
			printf("\t(got      : %s)\n", got);
			printf("\t(expected : %s)\n", expected);
		}
		else if (type == T_PTR)
		{
			printf("\t(raw int values)\n");
			printf("\t(got      :"); 
			ft_print_int_values_table(got, got_size);
			printf(")\n");

			printf("\t(expected :"); 
			ft_print_int_values_table(expected, expected_size);
			printf(")\n");


			printf("\n\t(raw char values)\n");
			printf("\t(got      :"); 
			ft_print_char_values_table(got, got_size);
			printf(")\n");

			printf("\t(expected :"); 
			ft_print_char_values_table(expected, expected_size);
			printf(")\n");


			printf("\n\t(raw bool values)\n");
			printf("\t(got      :"); 
			ft_print_bool_values_table(got, got_size);
			printf(")\n");

			printf("\t(expected :"); 
			ft_print_bool_values_table(expected, expected_size);
			printf(")\n");
		}
		else if (type == T_U_LONG_LONG)
		{
			printf("\t(got      : %llu)\n", (unsised long long) got);
			printf("\t(expected : %llu)\n", expected);
		}
		else if (type == T_BOOL)
		{
			printf("\t(got      :"); 
			if (got)
				printf("1");
			else
				printf("0");
			printf(")\n");

			printf("\t(expected :"); 
			if (expected)
				printf("1");
			else
				printf("0");
			printf(")\n");

		}
		else if (type == T_BOOL_TABLE)
		{
			printf("\t(got      : %d)\n", got);
			ft_print_bool_table(got, sizeof(got));
			printf("\t(expected : %d)\n", expected);
			ft_print_bool_table(expected, sizeof(expected));
		}
		
		COLOR_DEFAULT;
	}
	if (err)
		return (err);
	return (SUCCESS);
}