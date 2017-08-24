/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 15:07:13 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/22 14:36:56 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MAP_H
# define FT_MAP_H

# include <stdlib.h>
# include "ft_str.h"
# include "ft_str_dimen.h"
# include "ft_find_square.h"
# include "ft_show_map.h"

void	ft_map(char *map);
int		ft_check_map(char *buff, char charset[4], int nb_nl);
int		ft_get_first_line(char *str, char charset[4], int *nb_line, char **map);
char	**ft_get_array_map(char *buff, int nb_nl, int len_line);
void	ft_call_find_square(char **map, int nb_nl, int len_line, char *charset);
char	**fill_map(char **map, int result, char *elems, int *size);
#endif
