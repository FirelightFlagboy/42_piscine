/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 09:50:17 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/11 09:55:56 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <string.h>

#include "ft_perso.h"

int main(void)
{
	t_perso jack;
	jack.name = strdup("Jack");
	jack.life = 100.0;
	jack.age = 42;
	jack.profession = 123;
	printf("name>%s\nlife>%0.1lf\nage>%d\nprofession>%d",
	jack.name, jack.life, jack.age, jack.profession);
	return (0);
}
