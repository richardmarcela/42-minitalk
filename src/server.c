/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrichard <mrichard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:43:57 by marcela           #+#    #+#             */
/*   Updated: 2022/12/28 19:48:44 by mrichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

//a funcao que agora lida com o sinal deve possuir a prototipagem padrao para ser aceite como handler na sigaction()
void	handle_sigusr(int signum, siginfo_t *info, void *ucontent)
{
	static int				bit_itr = -1;
	static unsigned char	c;

	(void)ucontent;
	if (bit_itr < 0) //na primeira iteracao ele entra aqui
		bit_itr = 7;
	if (signum == SIGUSR1) //qd for 1
		c |= (1 << bit_itr); //ele adiciona os 1 nas posicoes corretas no c
	bit_itr--;
	if (bit_itr < 0) //qd acabar de adicionar todos os 8 bits ele entra pra escrever o caracter que agora esta armazenado no c
	{
		ft_putchar_fd(c, STDOUT_FILENO);
		c = 0;
		if (kill(info->si_pid, SIGUSR1) == -1)
			ft_printf("Server failed to send SIGUSR1");
	}
}

//configuro novamente os sinais, como no client side
void	config_signals(void)
{
	struct sigaction	sa_newsig;

	sa_newsig.sa_sigaction = &handle_sigusr;
	sa_newsig.sa_flags = SA_SIGINFO;
	if (sigaction(SIGUSR1, &sa_newsig, NULL) == -1)
		ft_printf("Failed to change SIGUSR1's behavior");
	if (sigaction(SIGUSR2, &sa_newsig, NULL) == -1)
		ft_printf("Failed to change SIGUSR2's behavior");
}

//mantenho o server aberto para a recepcao de sinais sempre
int	main(void)
{
	ft_printf("SERVER PID = %d\n\n", getpid());
	while (1)
		config_signals();
	return (EXIT_SUCCESS);
}
