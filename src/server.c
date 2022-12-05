/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrichard <mrichard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:43:57 by marcela           #+#    #+#             */
/*   Updated: 2022/12/05 19:27:41 by mrichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* SIGUSR1 e SIGUSR2 -> sinais reservados para o utilizador */
#include "minitalk.h"

int	main(void)
{
	ft_printf("\nServer PID: %d\n", getpid());
}