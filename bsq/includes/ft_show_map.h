/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_map.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 09:16:50 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/22 14:36:45 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SHOW_MAP_H
# define FT_SHOW_MAP_H

# include "ft_str.h"

void	ft_show_map(char **map, int len_line, int nb_nl);
void	ft_print_empty(char *map, int len_line, int nb_nl, char *charset);
#endif
