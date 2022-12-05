/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcela <marcela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:02:07 by marcela           #+#    #+#             */
/*   Updated: 2022/09/25 00:04:36 by marcela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*conv_s1;
	unsigned char	*conv_s2;

	i = 0;
	conv_s1 = (unsigned char *)str1;
	conv_s2 = (unsigned char *)str2;
	if (n == 0)
		return (0);
	while ((conv_s1[i] != '\0' && conv_s2[i] != '\0')
		&& (conv_s1[i] == conv_s2[i]) && i < (n - 1))
		i++;
	return (conv_s1[i] - conv_s2[i]);
}
/*
int		main()
{
   char str1[] = "aaa";
   char str2[] = "AAA";

   printf("%d \n", memcmp(str1, str2, 3));
   printf("%d \n", ft_memcmp(str1, str2, 3));

   return (0);
}*/