/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcela <marcela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 12:00:16 by marcela           #+#    #+#             */
/*   Updated: 2022/10/03 10:59:11 by marcela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	num_strs(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s++ == c)
			continue ;
		count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	char	**sav_strs;
	char	*sav_s;

	strs = malloc(sizeof(char *) * (num_strs(s, c) + 1));
	if (!strs || !s)
		return (0);
	sav_strs = strs;
	while (*s)
	{
		if (*s == c)
		{
			s++;
			continue ;
		}
		sav_s = (char *)s;
		while (*s && *s != c)
			s++;
		*strs = malloc(sizeof(char) * (s - sav_s + 1));
		if (!strs)
			return (0);
		ft_strlcpy(*strs++, sav_s, s - sav_s + 1);
	}
	*strs = 0;
	return (sav_strs);
}

/* int		main()
{
	char *texto = "marcela*juninho";
	char delimiter = '*';
	char **array;
	int size;
	int i;
	i = 0;

	size = 16 + 1; //Set the size of the array. Set it by hand.
	array = ft_split(texto, delimiter);

	while(i < size)
	{
		printf("->%s\n", array[i++]);
	}
	printf("->%s", array[i]);

	return(0);
}  */