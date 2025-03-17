/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcudos <marcudos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 11:37:24 by marcudos          #+#    #+#             */
/*   Updated: 2025/03/17 11:42:30 by marcudos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush02.h"

void	recursive_print(long number, t_dict *dict, int size)
{
	if (number <= 999)
	{
		print_hundreds((int)number, dict);
		if (size > 3)
		{
			print_word(size, dict);
		}
		return ;
	}
	recursive_print(number / 1000, dict, size - 3);
	if (number % 1000 > 0)
	{
		print_hundreds(number % 1000, dict);
		if (size > 3)
		{
			print_word(size, dict);
		}
	}
}
