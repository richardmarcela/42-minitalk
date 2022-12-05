/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcela <marcela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 15:42:00 by marcela           #+#    #+#             */
/*   Updated: 2022/10/02 02:38:36 by marcela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*src2;
	unsigned char	*dest2;

	i = 0;
	if ((!src && !dest))
		return (NULL);
	src2 = (unsigned char *)src;
	dest2 = (unsigned char *)dest;
	while (i < n)
	{
		*(dest2 + i) = *(src2 + i);
		i++;
	}
	return (dest);
}
/*
int		main()
{
	char dest1[] = "Roberto Leal esta vivo no nosso espirito.";
	char src[] = "Não sei se ele ainda canta.";
	char dest2[] = "Roberto Leal esta vivo no nosso espirito.";

	printf("\n%s \n", dest1);
	memcpy(dest1, src, 50);
	printf("%s\n", dest1);

	printf("\n%s \n", dest2);
	ft_memcpy(dest2, src, 50);
	printf("%s\n", dest2);
}*/