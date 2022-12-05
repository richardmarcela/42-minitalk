/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcela <marcela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 17:01:40 by marcela           #+#    #+#             */
/*   Updated: 2022/09/25 00:06:13 by marcela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	char			*a;
	unsigned int	tot;
	size_t			i;

	tot = size * nitems;
	a = malloc(size * nitems);
	if (a == NULL)
		return (NULL);
	i = 0;
	while (tot > 0)
	{
		a[i] = 0;
		i++;
		tot--;
	}
	return ((void *)a);
}
