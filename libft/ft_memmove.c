/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcela <marcela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 22:33:49 by marcela           #+#    #+#             */
/*   Updated: 2022/10/02 02:37:50 by marcela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!src && !dest)
		return (NULL);
	if (src < dest)
	{
		while (n != 0)
		{
			n--;
			((char *)dest)[n] = ((char *)src)[n];
		}
	}
	else if (src > dest)
		ft_memcpy(dest, src, n);
	return (dest);
}

/*
int		main()
{
	char src[] = "aaaaa";
	char dest1[] = "bbbbb";

	char src2[] = "12345";
	char dest2[] = "67890";

	printf("\n%s \n", dest1);
	memmove(dest1, src, 5);
	printf("%s\n", dest1);

	printf("\n%s \n", dest2);
	ft_memmove(dest2, src2, 5);
	printf("%s\n", dest2);
}*/