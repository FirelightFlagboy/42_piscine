/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 14:33:46 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/10 14:41:05 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int main(void) {
	char test[] = "eUwfGeSLLnNqWMK\ntCixYuhQXCRCOk\tLinbHnvVoooUlFzNrypXEEiY";
	printf("normal>\n");
	printf("%s\n", test);
	printf("\nshow non printable>\n");
	ft_putstr_non_printable(test);
	return 0;
}
