/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcela <marcela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 00:16:40 by marcela           #+#    #+#             */
/*   Updated: 2022/09/28 14:42:16 by marcela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h> */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new_str;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		new_str = malloc(sizeof(char) * 1);
		if (new_str == NULL)
			return (NULL);
		new_str[0] = '\0';
		return (new_str);
	}
	new_str = malloc(sizeof(char) * (len + 1));
	if (new_str == NULL)
		return (NULL);
	while (s[i] != '\0' && len-- > 0)
		new_str[i++] = s[start++];
	new_str[i] = '\0';
	return (new_str);
}

/* int		main()
{
	char str[] = "Esta eh a string que vou passar.";
	char *asd;
	int start = 2;
	int length = 5;

	printf("%s\n", str);
	asd = ft_substr(str, start, length);
	printf("%s\n", asd);

	return (0);
} */