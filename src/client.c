/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcela <marcela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:43:59 by marcela           #+#    #+#             */
/*   Updated: 2022/12/05 12:15:51 by marcela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 1 - create TCP socket
2 - connect to the server
3 - communicate with each other
4 - close the connection */
# include "minitalk.h"

/* testo se o numero de parametros está correto e se o número do pid foi 
passado apenas com números */
int	ft_errors_in_main(int argc, char **argv)
{
	int	i;

	if (argc != 3)
		return (1);
	i = -1;
	while (argv[1][++i])
	{
		if (!ft_strchr("0123456789", argv[1][i]))
			return (1);
	}
	return (0);
}

void	handler_signal(int sig)
{
	
}

int	main(int argc, char **argv)
{
	if(ft_errors_in_main(argv, argv))
		return (-1);
	ft_printf("\nClient PID: %d\n", getpid());
	signal(SIGUSR1, handler_signal);
	signal(SIGUSR2, handler_signal);
}