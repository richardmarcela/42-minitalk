/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcela <marcela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 17:17:57 by marcela           #+#    #+#             */
/*   Updated: 2022/10/02 01:57:34 by marcela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t n)
{
	size_t			i;
	unsigned char	*conv_s;

	i = 0;
	conv_s = (unsigned char *)ptr;
	while (i < n)
	{
		*(conv_s + i) = '\0';
		i++;
	}
}
