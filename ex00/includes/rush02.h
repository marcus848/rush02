/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcudos <marcudos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 16:31:55 by marcudos          #+#    #+#             */
/*   Updated: 2025/03/17 11:44:49 by marcudos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_dict
{
	char	*number;
	char	*word;
	int		size;
} t_dict;

// parse_dict
t_dict	*parse_dict(char *dict_file);

// utils
int		count_lines(char *dict_file);
int		ft_strlen(char *str);
char	*ft_strdup(char *src);
int		ft_atoi(char *str);

void	print_word(int number, t_dict *dict);
void	print_units(int n, t_dict *dict);
void	print_tens(int n, t_dict *dict);
void	print_hundreds(int n, t_dict *dict);

void	recursive_print(long number, t_dict *dict, int size);

#endif

