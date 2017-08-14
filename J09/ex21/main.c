/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 15:43:40 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/11 15:48:50 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ultimate_fight.h"
#include "ft_perso.h"

int		main(void)
{
	t_perso nicolas_bauer;
	t_perso anastacia;

	nicolas_bauer.name = "Nicolas Bauer";
	nicolas_bauer.life = 100;
	anastacia.name = "Anastacia";
	anastacia.life = 100;
	ft_fight(&nicolas_bauer, &anastacia, KICK);
	ft_fight(&anastacia, &nicolas_bauer, PUNCH);
	ft_fight(&nicolas_bauer, &anastacia, KICK8);
	ft_fight(&nicolas_bauer, &anastacia, KICK11);
	ft_fight(&nicolas_bauer, &anastacia, KICK3);
	ft_fight(&nicolas_bauer, &anastacia, KICK1);
	ft_fight(&nicolas_bauer, &anastacia, HEADBUTT);
	ft_fight(&nicolas_bauer, &anastacia, KICK10);
	ft_fight(&nicolas_bauer, &anastacia, HEADBUTT);
	return (0);
}
