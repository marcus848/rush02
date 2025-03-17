/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_low_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcudos <marcudos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 11:14:21 by marcudos          #+#    #+#             */
/*   Updated: 2025/03/17 11:31:16 by marcudos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush02.h"

void	print_word(int number, t_dict *dict)
{
	int i;

	i = 0;
	while (dict[i].number)
	{
		if (ft_atoi(dict[i].number) == number)
		{
			write(1, dict[i].word, ft_strlen(dict[i].word));
			write(1, " ", 1);
			return ;
		}
		i++;
	}
}

void	print_units(int n, t_dict *dict)
{
	print_word(n, dict);
}

void	print_tens(int n, t_dict *dict)
{
	if (n < 10)
		print_units(n, dict);
	else if (n < 20)
		print_word(n, dict);
	else
	{
		print_word((n / 10) * 10, dict);
		if (n % 10)
			print_units(n % 10, dict);
	}
}

void	print_hundreds(int n, t_dict *dict)
{
	if (n >= 100)
	{
		print_units(n / 100, dict);
		print_word(100, dict);
	}
	if (n % 100)
		print_tens(n % 100, dict);
}
