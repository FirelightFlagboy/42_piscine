/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 18:49:53 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/13 16:37:28 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

void	ft_putchar(char c);

void	ft_sort_params(char *str[], int size);

int		ft_strcmp(char *s1, char *s2);

int		main(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc < 2)
		return (0);
	ft_sort_params(argv, argc);
	i = 0;
	while (i++ < argc - 1)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
	}
	return (0);
}

void	ft_sort_params(char *str[], int size)
{
	int		i;
	char	*temp;

	i = 0;
	while (++i < size - 1)
	{
		if (ft_strcmp(str[i], str[i + 1]) > 0)
		{
			temp = str[i];
			str[i] = str[i + 1];
			str[i + 1] = temp;
			i = 0;
		}
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	unsigned int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}
