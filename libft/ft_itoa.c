/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcela <marcela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:40:23 by marcela           #+#    #+#             */
/*   Updated: 2022/10/02 01:42:23 by marcela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	num_digits(int n)
{
	size_t	counter;

	counter = 0;
	if (n <= 0)
		counter++;
	while (n != 0)
	{
		n = n / 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	counter;
	int		s;

	counter = num_digits(n);
	str = malloc(sizeof(char) * (counter + 1));
	if (str == NULL)
		return (NULL);
	s = 1;
	str[counter] = '\0';
	counter--;
	if (n < 0)
	{
		str[0] = '-';
		s = -1;
	}
	else if (n == 0)
		str[counter] = '0';
	while (n != 0)
	{
		str[counter] = ((n % 10) * s) + 48;
		n = n / 10;
		counter--;
	}
	return (str);
}

/* 
int		main(void)
{
	int number1 = 123456789;
	int number2 = 1;
	int number3 = 0;
	int number4 = 0001342;
	int number5 = 42;
	int number6 = 422;

	int number7 = -123456789;
	int number8 = -1;
	int number9 = -0;
	int number10 = -00101;
	int number11 = -42;
	int number12 = -422;

	ft_itoa(number1);
	printf("%s\n", ft_itoa(number2));
	printf("%s\n", ft_itoa(number3));
	ft_itoa(number4);
	printf("%s\n", ft_itoa(number5));
	ft_itoa(number6);
	ft_itoa(number7);
	ft_itoa(number8);
	ft_itoa(number9);
	ft_itoa(number10);
	ft_itoa(number11);
	ft_itoa(number12);

	return (0);
} */