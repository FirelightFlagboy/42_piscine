/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 08:15:16 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/16 15:43:14 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_words_tables(char **tab);

void	ft_putstr(char *str);

void	ft_putchar(char c);

void	ft_print_words_tables(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
	{
		ft_putstr(tab[i]);
		ft_putstr("\n");
		i++;
	}
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}
