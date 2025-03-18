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

void	print_numbers(long number, t_dict *dict, int size)
{
	if (number <= 999)
	{
		print_hundreds((int)number, dict);
		if (size > 0)
		{
			if (size == 1)
				print_units_center(size * 4, dict);
			else
				print_units_center(4 + (size - 1) * 3, dict);
		}
		return ;
	}
	print_numbers(number / 1000, dict, size + 1);
	if (number % 1000 > 0)
	{
		print_hundreds(number % 1000, dict);
		if (size == 1)
			print_units_center(size * 4, dict);
		else if (size > 1)
			print_units_center(4 + (size - 1) * 3, dict);
	}
}

void	print_units_center(int	size, t_dict *dict)
{
	int	i;

	i = 0;
	while (dict[i].number)
	{
		if (dict[i].size == size)
		{
			write(1, dict[i].word, ft_strlen(dict[i].word));
			write(1, " ", 1);
			return ;
		}
		i++;
	}
		
}
