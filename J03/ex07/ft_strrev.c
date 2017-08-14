/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 12:20:03 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/04 09:52:08 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strrev(char *str);

char		*ft_strrev(char *str)
{
	int		len;
	int		haut;
	int		bas;
	char	temp;

	len = 0;
	haut = 0;
	bas = 0;
	while (str[len] != '\0')
		len++;
	haut = len - 1;
	len /= 2;
	while (len > 0)
	{
		temp = str[haut];
		str[haut] = str[bas];
		str[bas] = temp;
		haut--;
		bas++;
		len--;
	}
	return (str);
}
