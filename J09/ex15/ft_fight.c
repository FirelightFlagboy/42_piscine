/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fight.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 13:56:30 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/11 14:46:12 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fight.h"

void		ft_fight(t_perso *per1, t_perso *per2, int attack_type)
{
	if (per1->life <= 0 && per2->life <= 0)
		return ;
	if (attack_type == KICK)
	{
		ft_kick(per1->name, per2->name);
		per2->life -= 15;
	}
	if (attack_type == PUNCH)
	{
		ft_punch(per1->name, per2->name);
		per2->life -= 5;
	}
	if (attack_type == HEADBUTT)
	{
		ft_headbutt(per1->name, per2->name);
		per2->life -= 20;
	}
	if (per2->life <= 0)
	{
		ft_putstr(per2->name);
		ft_putstr(" is dead\n");
		ft_putstr("brcrrrrrr\n");
	}
}

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void		ft_kick(char *name1, char *name2)
{
	ft_putstr(name1);
	ft_putstr(" does a judo kick on ");
	ft_putstr(name2);
	ft_putstr("\nbrcrrrrrr\n");
}

void		ft_punch(char *name1, char *name2)
{
	ft_putstr(name1);
	ft_putstr(" does a judo punch on ");
	ft_putstr(name2);
	ft_putstr("\nbrcrrrrrr\n");
}

void		ft_headbutt(char *name1, char *name2)
{
	ft_putstr(name1);
	ft_putstr(" does a judo headbutt on ");
	ft_putstr(name2);
	ft_putstr("\nbrcrrrrrr\n");
}
