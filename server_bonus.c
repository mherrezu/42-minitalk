/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 12:18:23 by mherrezu          #+#    #+#             */
/*   Updated: 2023/05/05 11:01:32 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./print_libft/libft.h"
#include <signal.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	handle_signal(int signal, siginfo_t *info, void *ptr)
{
	static char		bit = 0;
	static int		i = 7;
	static pid_t	pid_client = 0;

	(void)ptr;
	if (signal == SIGUSR2)
		bit = (1 << i) | bit;
	i--;
	if (i == -1)
	{
		if (bit == '\0')
		{
			pid_client = info->si_pid;
			kill(pid_client, SIGUSR1);
			pid_client = 0;
			write(1, "\n", 1);
		}
		write(1, &bit, 1);
		i = 7;
		bit = 0;
	}
}

int	main(int argc, char **argv)
{
	struct sigaction	new_sig;
	int					pid;

	(void)argv;
	if (argc == 1)
	{
		pid = getpid();
		ft_printf("Server PID: %d\n", pid);
		new_sig.sa_sigaction = handle_signal;
		new_sig.sa_flags = SA_SIGINFO;
		sigaction(SIGUSR1, &new_sig, NULL);
		sigaction(SIGUSR2, &new_sig, NULL);
		while (1)
			pause();
	}
	return (0);
}
