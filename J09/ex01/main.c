/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 17:46:19 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/10 18:12:03 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_takes_place(int hour);

int main(void) {
	int i = 0;
	while (i <= 24)
	{
		ft_takes_place(i);
		i++;
	}
	return 0;
}