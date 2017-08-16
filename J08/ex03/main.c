/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 11:00:33 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/15 18:33:04 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_abs.h"

int		main(int argc, char const *argv[])
{
	argc = 0;
	printf(">> %d\n>> %d\n>> %d\n",
	ABS(atoi(argv[1])), ABS(atoi(argv[2])), ABS(atoi(argv[3])));
	return (0);
}
