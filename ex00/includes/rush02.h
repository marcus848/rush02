/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcudos <marcudos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 16:31:55 by marcudos          #+#    #+#             */
/*   Updated: 2025/03/14 16:32:05 by marcudos         ###   ########.fr       */
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
	char *number;
	char *word;
} t_dict;

// parse_dict
t_dict	*parse_dict(char *dict_file);

// utils
int		count_lines(char *dict_file);
char	*ft_strdup(char *src);
int		ft_atoi(char *str);

#endif

