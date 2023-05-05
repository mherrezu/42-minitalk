/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:19:32 by mherrezu          #+#    #+#             */
/*   Updated: 2022/10/08 19:22:32 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Envía la string ’s’ al file descriptor dado seguido de un salto de línea.

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	write (fd, s, ft_strlen(s));
	write (fd, "\n", 1);
}
