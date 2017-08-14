/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 08:02:06 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/11 16:30:53 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			ft_strstr(const char *str, char *to_find);

void		ft_putstr(char *str);

void		ft_putchar(char c);

int			main(int argc, char const *argv[])
{
	int boolean;
	int i;

	boolean = 0;
	i = 1;
	while (i < argc)
	{
		boolean = (ft_strstr(argv[i], "powers")) ? 1 : boolean;
		boolean = (ft_strstr(argv[i], "attack")) ? 1 : boolean;
		boolean = (ft_strstr(argv[i], "president")) ? 1 : boolean;
		i++;
	}
	if (boolean)
		ft_putstr("Alert!!!\n");
	return (0);
}

int			ft_strstr(const char *str, char *to_find)
{
	int i;
	int j;
	int boolean;

	i = 0;
	j = 0;
	boolean = 1;
	while (str[i] != '\0' && str[i] <= ' ')
		i++;
	while (str[i] != '\0' && to_find[j] != '\0')
	{
		boolean = (str[i] == to_find[j]
			|| str[i] + 32 == to_find[j]) ? boolean : 0;
		i++;
		j++;
	}
	while (str[i] != '\0' && str[i] <= ' ')
		i++;
	boolean = (str[i] == '\0' && to_find[j] == '\0') ? boolean : 0;
	return (boolean);
}

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void		ft_putchar(char c)
{
	write(1, &c, 1);
}
