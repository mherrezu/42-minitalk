/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 12:18:22 by mherrezu          #+#    #+#             */
/*   Updated: 2023/05/05 11:01:47 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./print_libft/libft.h"
#include <signal.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	send_bits(int pid, char c)
{
	int	bit;
	int	i;

	i = 7;
	while (i > -1)
	{
		bit = (c >> i) & 1;
		if (bit == 0)
			kill(pid, SIGUSR1);
		if (bit == 1)
			kill(pid, SIGUSR2);
		usleep(100);
		i--;
	}
}

void	check_signal(int signal)
{
	if (signal == SIGUSR1)
		write(1, "Message received!\n", 18);
}

int	main(int argc, char **argv)
{
	int	pid;
	int	i;

	(void)argc;
	i = 0;
	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		signal(SIGUSR1, check_signal);
		signal(SIGUSR2, check_signal);
		while (i <= (int)(ft_strlen(argv[2])))
		{
			send_bits(pid, argv[2][i]);
			i++;
		}
	}
	else
		write(2, "Invalid number of arguments\n", 27);
	return (0);
}
