/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 17:46:17 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/10 18:28:32 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int		hour1;
	int		hour2;
	char	mode1;
	char	mode2;

	mode1 = ((hour >= 0 && hour < 12) || hour == 24) ? 'A' : 'P';
	mode2 = (((hour + 1) >= 0 && (hour + 1) < 12)
	|| (hour + 1) == 24) ? 'A' : 'P';
	if (hour < 12)
	{
		hour1 = (hour == 0) ? 12 : hour;
		hour2 = ((hour + 1) == 0 && (hour + 1) < 12) ? 12 : (hour + 1);
	}
	else
	{
		hour -= 12;
		hour1 = (hour == 0) ? 12 : hour;
		hour2 = ((hour + 1) == 0 && (hour + 1) < 11) ? 12 : (hour + 1);
		mode2 = (hour2 > 12 && mode2 == 'P') ? 'A' : mode2;
		hour2 = (hour2 > 12) ? hour2 - 12 : hour2;
	}
	printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %c.M AND %d.00 %c.M.\n"
	, hour1, mode1, hour2, mode2);
}
