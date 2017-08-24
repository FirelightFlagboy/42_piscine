/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 15:36:23 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/22 14:38:55 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	main(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc == 1)
		ft_read_input();
	else
		while (++i < argc)
		{
			ft_read_file(argv[i]);
			if (i < argc - 1)
				ft_putstr("\n");
		}
	return (0);
}
