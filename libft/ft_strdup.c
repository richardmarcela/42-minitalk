/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcela <marcela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 15:10:54 by marcela           #+#    #+#             */
/*   Updated: 2022/10/02 02:13:19 by marcela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	unsigned int	i;
	char			*s2;

	s2 = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (s2 == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		s2[i] = s[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

/* int main()
{
	char a[] = "Teste";
	char *b;

	char c[] = "Teste";
	char *d;

	b = strdup(a);
	d = ft_strdup(c);

	printf("%s \n", b);
	printf("%s \n", d);
}
 */