/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcudos <marcudos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:18:01 by marcudos          #+#    #+#             */
/*   Updated: 2025/03/17 11:44:30 by marcudos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush02.h"

int	main(int argc, char **argv)
{
	char	*dict_file;
	char	*number;
	t_dict	*dict;

	if (argc < 2 || argc > 3)
		return (1);
	if (argc == 2)
	{
		dict_file = "numbers.en.dict";
		number = argv[1];
	}
	else
	{
		dict_file = argv[1];
		number = argv[2];
	}
	dict = parse_dict(dict_file);
	if (!dict)
		return (1);
	print_numbers(ft_atoll(number), dict, 0);
	write(1, "\n", 1);
	free(dict);
	return (0);
}
