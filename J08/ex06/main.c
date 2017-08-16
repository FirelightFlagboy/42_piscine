/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 11:15:38 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/15 18:34:53 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_stock_par.h"

struct s_stock_par	*ft_param_to_tab(int ac, char **av);

void				ft_show_tab(struct s_stock_par *par);

int					main(int argc, char **argv)
{
	struct s_stock_par *tab;

	tab = ft_param_to_tab(argc, argv);
	ft_show_tab(tab);
	return (0);
}

void				ft_putchar(char c)
{
	write(1, &c, 1);
}
