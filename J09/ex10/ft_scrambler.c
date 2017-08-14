/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 09:35:11 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/11 09:40:04 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int temp;

	temp = ***a;
	***a = *b;
	*b = ****d;
	****d = *******c;
	*******c = temp;
}
