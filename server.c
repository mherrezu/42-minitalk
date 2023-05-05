/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 11:45:47 by mherrezu          #+#    #+#             */
/*   Updated: 2023/05/05 11:01:35 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./print_libft/libft.h"
#include <signal.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	handler(int signal)
{
	static char	bit = 0;
	static int	i = 7;

	if (signal == SIGUSR2)
		bit = (1 << i) | bit;
	i--;
	if (i == -1)
	{
		write(1, &bit, 1);
		if (bit == '\0')
			write(1, "\n", 1);
		i = 7;
		bit = 0;
	}
}

int	main(int argc, char **argv)
{
	int	pid;

	(void)argv;
	if (argc == 1)
	{
		pid = getpid();
		ft_printf("Server PID: %d\n", pid);
		signal(SIGUSR1, &handler);
		signal(SIGUSR2, &handler);
		while (1)
			pause();
	}
	return (0);
}
