/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_fight.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 15:39:10 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/11 16:22:44 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ULTIMATE_FIGHT_H
# define FT_ULTIMATE_FIGHT_H

# define KICK 15
# define PUNCH 50
# define HEADBUTT 20
# define KICK1 13
# define KICK2 3
# define KICK3 18
# define KICK4 9
# define KICK5 11
# define KICK6 13
# define KICK7 8
# define KICK8 6
# define KICK9 11
# define KICK10 9
# define KICK11 18
# define KICK12 10

# include <unistd.h>
# include "ft_perso.h"

void		ft_fight(t_perso *per1, t_perso *per2, int attack_type);
void		ft_kick(char *name1, char *name2);
void		ft_punch(char *name1, char *name2);
void		ft_headbutt(char *name1, char *name2);
void		ft_putstr(char *str);
void		ft_putchar(char c);
#endif
