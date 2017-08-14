/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 10:56:01 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/14 11:07:50 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	match(char *s1, char *s2)
{
//	printf("s1>%s\t,s2>%s\n", s1, s2);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == '\0' || *s2 == '\0')
		return (0);
	else if (*s1 == *s2)
		return (match(s1 + 1, s2 + 1));
	else if (*s2 == '*')
		return (match(s1 + 1, s2) || match(s1 + 1, s2 + 1));
	else
		return (0);
}
