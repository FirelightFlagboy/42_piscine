/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 11:05:36 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/15 18:33:24 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_stock_par.h"

struct s_stock_par		*ft_param_to_tab(int ac, char **av);

int						main(int argc, char **argv)
{
	ft_param_to_tab(argc, argv);
	return (0);
}
