/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcudos <marcudos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 18:12:19 by marcudos          #+#    #+#             */
/*   Updated: 2025/03/14 18:12:27 by marcudos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush02.h"

static int	fill_dict_entry(char *buffer, t_dict *dict, int index)
{
	char *number;
	char *word;
	int i;

	i = 0;
	number = buffer;
	word = buffer;
	while (word[i] && word[i] != ':')
		i++;
	if (word[i] == ':')
	{
		word[i] = '\0';
		word = &word[i + 2];
	}
	dict[index].number = ft_strdup(number);
	dict[index].word = ft_strdup(word);
	return (0);
}

static void	init_dict(t_dict *dict, int size)
{
	int i;

	i = 0;
	while (i <= size)
	{
		dict[i].number = NULL;
		dict[i].word = NULL;
		i++;
	}
}

static void	read_dict(int fd, t_dict *dict)
{
	char buffer[4096];
	int index;
	int i;

	index = 0;
	i = 0;
	while (read(fd, &buffer[i], 1) > 0)
	{
		if (buffer[i] == '\n')
		{
			buffer[i] = '\0';
			fill_dict_entry(buffer, dict, index++);
			i = 0;
		}
		else
			i++;
	}
}

t_dict	*parse_dict(char *dict_file)
{
	int fd;
	int size;
	t_dict *dict;

	size = count_lines(dict_file);
	dict = malloc(sizeof(t_dict) * (size + 1));
	if (!dict)
		return (NULL);
	init_dict(dict, size);
	fd = open(dict_file, O_RDONLY);
	if (fd < 0)
		return (NULL);
	read_dict(fd, dict);
	close(fd);
	return (dict);
}

