/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcela <marcela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:38:34 by marcela           #+#    #+#             */
/*   Updated: 2022/10/02 02:28:51 by marcela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = n;
	if (n == 0)
		return (0);
	while ((str1[i] == str2[i]) && str1[i] != '\0'
		&& str2[i] != '\0' && len - 1 > 0)
	{
		i++;
		len--;
	}
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
/*
int		main()
{
	char str1[] = "asdsa";
	char str2[] = "asdsaa";

	printf("\n%d \n",strncmp(str1, str2, 20));
	printf("%d \n",ft_strncmp(str1, str2, 20));

	printf("\n%d \n",strncmp(str1, str2, 21));
	printf("%d \n",ft_strncmp(str1, str2, 21));

	printf("\n%d \n",strncmp(str1, str2, 25));
	printf("%d \n",ft_strncmp(str1, str2, 25));

	printf("\n%d \n",strncmp(str1, str2, 19));
	printf("%d \n",ft_strncmp(str1, str2, 19));

	printf("\n%d \n",strncmp(str1, str2, 1));
	printf("%d \n",ft_strncmp(str1, str2, 1));

	printf("\n%d \n",strncmp(str1, str2, 0));
	printf("%d \n",ft_strncmp(str1, str2, 0));

	printf("\n%d \n",strncmp(str1, str2, 3));
	printf("%d \n",ft_strncmp(str1, str2, 3));

	printf("\n%d \n",strncmp(str1, str2, 2));
	printf("%d \n",ft_strncmp(str1, str2, 2));

	printf("\n%d \n",ft_strncmp(str1, str2, -1));
	printf("%d \n",ft_strncmp(str1, str2, -10));

	return(0);
}
*/