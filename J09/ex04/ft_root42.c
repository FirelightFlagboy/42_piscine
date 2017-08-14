/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_root42.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 20:56:38 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/11 16:28:47 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_root42(char *str);

char	ft_alpha_lower(char c);

char	ft_alpha_upper(char c);

char	ft_number(char c);

char	*ft_root42(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c >= 'a' && c <= 'z')
			c = ft_alpha_lower(c);
		else if (c >= 'A' && c <= 'Z')
			c = ft_alpha_upper(c);
		str[i] = c;
		i++;
	}
	return (str);
}

char	ft_alpha_lower(char c)
{
	int i;

	i = 0;
	while (i < 10)
	{
		c++;
		if (c == '{')
			c = 'a';
		i++;
	}
	return (c);
}

char	ft_alpha_upper(char c)
{
	int i;

	i = 0;
	while (i < 10)
	{
		c++;
		if (c == '[')
			c = 'A';
		i++;
	}
	return (c);
}
