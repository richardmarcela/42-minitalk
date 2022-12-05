/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcela <marcela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 23:54:44 by marcela           #+#    #+#             */
/*   Updated: 2022/09/24 23:30:05 by marcela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int ch)
{
	if (ch >= 'a' && ch <= 'z')
		return (ch - 32);
	return (ch);
}
/*
int main(void) 
{
	char c;

	c = 'm';
	printf("%c -> %c", c, ft_toupper(c));

	c = 'D';
	printf("\n%c -> %c", c, ft_toupper(c));

	c = '9';
	printf("\n%c -> %c", c, ft_toupper(c));
	return (0);
}*/