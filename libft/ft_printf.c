/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrichard <mrichard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:01:40 by marcela           #+#    #+#             */
/*   Updated: 2022/12/04 18:32:49 by mrichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_format(va_list args, const char format)
{
	if (format == 'c')
		return (ft_print_chr(va_arg(args, int)));
	else if (format == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (format == 'p')
		return (ft_print_ptr(va_arg(args, unsigned long long)));
	else if (format == 'd' || format == 'i')
		return (ft_print_num(va_arg(args, int)));
	else if (format == 'u')
		return (ft_print_unsigned(va_arg(args, unsigned int)));
	else if (format == 'x' || format == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), format));
	else if (format == '%')
		return (ft_print_chr('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	size_t		i;
	va_list		args;
	int			length;

	i = 0;
	length = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			length += ft_format(args, str[i + 1]);
			i++;
		}
		else
			length += ft_print_chr(str[i]);
		i++;
	}
	va_end(args);
	return (length);
}
