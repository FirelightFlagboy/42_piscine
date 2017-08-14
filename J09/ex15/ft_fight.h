/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fight.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 13:56:33 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/11 14:42:15 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FIGHT_H
# define FT_FIGHT_H

# define KICK 1
# define PUNCH 2
# define HEADBUTT 3

# include <unistd.h>
# include "ft_perso.h"

void		ft_fight(t_perso *per1, t_perso *per2, int attack_type);
void		ft_kick(char *name1, char *name2);
void		ft_punch(char *name1, char *name2);
void		ft_headbutt(char *name1, char *name2);
void		ft_putstr(char *str);
void		ft_putchar(char c);
#endif
