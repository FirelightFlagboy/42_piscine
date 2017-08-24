/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_square.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 17:29:44 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/23 07:59:06 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FIND_SQUARE_H
# define FT_FIND_SQUARE_H

# include <stdlib.h>

int			check(char **map, int pos, char *elems, int *size);
int			check_rec(char **map, int pos, char *elems, int *size);
long long	find_square(char **map, char *elems, int *size);
#endif
