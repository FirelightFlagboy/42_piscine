/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decrypt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 12:49:05 by fbenneto          #+#    #+#             */
/*   Updated: 2017/08/11 16:21:13 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_perso.h"

int			ft_nb_of_people(char *str);

int			ft_get_age(char *str, int *index);

char		*ft_get_name(char *str, int *index);

t_perso		**ft_decrypt(char *str)
{
	t_perso		**some_people;
	int			index;
	int			nb_people;
	int			i;

	nb_people = ft_nb_of_people(str);
	some_people = malloc((nb_people + 1) * sizeof(*some_people));
	i = 0;
	index = 0;
	while (i < nb_people)
	{
		some_people[i] = malloc(sizeof(t_perso));
		some_people[i]->age = ft_get_age(str, &index);
		some_people[i]->name = ft_get_name(str, &index);
		i++;
	}
	some_people[i] = NULL;
	return (some_people);
}

int			ft_nb_of_people(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '|')
			count++;
		i++;
	}
	return (count);
}

int			ft_get_age(char *str, int *index)
{
	int i;
	int age;

	i = *index;
	age = 0;
	while (str[i] != '\0' && str[i] != '|')
	{
		age = age * 10 + str[i] - '0';
		i++;
	}
	*index = i;
	return (age);
}

char		*ft_get_name(char *str, int *index)
{
	int		i;
	int		len_name;
	char	*name;

	i = *index + 1;
	len_name = 0;
	while (str[i] != '\0' && str[i] != ';')
	{
		len_name++;
		i++;
	}
	name = malloc((len_name + 1) * sizeof(char));
	i = *index + 1;
	while (str[i] != '\0' && str[i] != ';')
	{
		name[i] = str[i];
		i++;
	}
	name[i] = '\0';
	return (name);
}
