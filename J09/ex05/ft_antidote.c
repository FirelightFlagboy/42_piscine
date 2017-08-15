/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 21:56:22 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/10 22:05:55 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_antidote(int i, int j, int k)
{
	if ((i < j && i > k) || (i < k && i > j))
		return (i);
	if ((j < k && j > i) || (j < i && j > k))
		return (j);
	return (k);
}