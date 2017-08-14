/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 09:59:03 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/11 14:28:13 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_DOOR_H
# define __FT_DOOR_H
# include <unistd.h>
# define OPEN 1
# define CLOSE 0
# define TRUE 1
# define FALSE 0

typedef struct s_door	t_door;
struct	s_door
{
	int state;
};
void	ft_putstr(char *str);

int		close_door(t_door *door);

int		open_door(t_door *door);

int		is_door_open(t_door *door);

int		is_door_close(t_door *door);
#endif
