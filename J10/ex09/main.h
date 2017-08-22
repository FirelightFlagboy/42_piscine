/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 07:59:28 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/17 11:07:33 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include "ft_operation.h"
# include "ft_str.h"

typedef struct s_opp	t_opp;
struct	s_opp
{
	char	*type;
	int		(*f)(int, int);
};
int		ft_atoi(char *str);
void	ft_call_good_func(char **tab, int nb1, int nb2);
int		ft_usage(int nb1, int nb2);
#endif
