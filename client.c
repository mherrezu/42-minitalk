/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 11:45:50 by mherrezu          #+#    #+#             */
/*   Updated: 2023/05/05 11:01:43 by mherrezu         ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	int	pid;
	int	i;

	i = 0;
	(void)argc;
	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		while (i <= (int)(ft_strlen(argv[2])))
		{
			send_bits(pid, argv[2][i]);
			i++;
		}
	}
	else
		write(1, "Invalid number of arguments\n", 28);
	return (0);
}
