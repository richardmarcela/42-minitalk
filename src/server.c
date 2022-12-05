/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcela <marcela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:43:57 by marcela           #+#    #+#             */
/*   Updated: 2022/12/05 12:14:48 by marcela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 1 - create TCP socket 
2 - bind the TCP socket to the server address (ip and port)
3 - waiting for the clients
4 - connection is estabilished between the clien and server 
5 - communicate with each other
6 - close the connection from the client

SIGUSR1 e SIGUSR2 -> sinais reservados para o utilizador
 */
# include "minitalk.h"

int	main(void)
{
	char	server_message[2000], client_message[2000];

	ft_printf("\nServer PID: %d\n", getpid());

}