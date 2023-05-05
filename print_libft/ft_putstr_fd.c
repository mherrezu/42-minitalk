/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:11:57 by mherrezu          #+#    #+#             */
/*   Updated: 2022/10/08 19:18:31 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Envía la string ’s’ al file descriptor especificado.
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write (fd, s, ft_strlen(s));
}
