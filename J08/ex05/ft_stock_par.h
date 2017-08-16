/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 17:46:00 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/15 18:02:34 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

# include <stdlib.h>
# include <unistd.h>

typedef struct	s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}				t_stock_par;

char			*ft_strdup(char *src);
char			**ft_split_whitespaces(char *str);
void			ft_show_tab(struct s_stock_par *par);
void			ft_putchar(char c);
void			ft_putnbr(int nb);
void			ft_putstr(char *str);
#endif
