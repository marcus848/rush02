/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcudos <marcudos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:18:01 by marcudos          #+#    #+#             */
/*   Updated: 2025/03/14 16:34:14 by marcudos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush02.h"

int	main(int argc, char **argv)
{
	char *dict_file;
	char *number;
	t_dict *dict;

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
	(void) number;
	if (!dict)
		return (1);
	printf("number %s\nword: %s\nsize: %d\n", dict[39].number, dict[39].word, dict[39].size);
	free(dict);
	return (0);
}

