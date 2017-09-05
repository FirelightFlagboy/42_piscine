/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_island.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: florian <florian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 22:52:15 by florian           #+#    #+#             */
/*   Updated: 2017/09/05 22:06:33 by florian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COUNT_ISLAND_H
# define COUNT_ISLAND_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

void 	ft_read_file(char *filename);
char	*ft_strcat_ultimate(char **dest, char *src);
char	*ft_realloc(char **buff, int size);
void	ft_find_island(char *str);
int		ft_str_is_uncorrect(char *str);
#endif
