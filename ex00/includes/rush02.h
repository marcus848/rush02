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
unsigned long long	ft_atoll(char *str);

void	print_word(unsigned long long number, t_dict *dict);
void	print_units(unsigned long long n, t_dict *dict);
void	print_tens(unsigned long long n, t_dict *dict);
void	print_hundreds(unsigned long long n, t_dict *dict);

void	print_numbers(unsigned long long number, t_dict *dict, int size);
void	print_units_center(int	size, t_dict *dict);

#endif

