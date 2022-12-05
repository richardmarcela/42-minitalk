/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrichard <mrichard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:43:59 by marcela           #+#    #+#             */
/*   Updated: 2022/12/05 21:47:45 by mrichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "minitalk.h"

/* testo se o numero de parametros está correto e se o número do pid foi 
passado apenas com números */
void	ft_errors_in_main(int argc, char **argv)
{
	int	i;

	if (argc != 3)
		ft_printf("Wrong number of params!");
	i = -1;
	while (argv[1][++i])
	{
		if (!ft_strchr("0123456789", argv[1][i]))
		ft_printf("Incorrect PID!");
	}
}

void	handler_signal(int sig)
{
	if (sig == SIGUSR1)
		ft_printf("Signal %d coming out!\n", sig);
}

int	main(int argc, char **argv)
{
	ft_errors_in_main(argc, argv);
	ft_printf("\nClient PID: %d\n", getpid());
	
}