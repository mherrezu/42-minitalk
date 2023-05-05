/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:32:13 by mherrezu          #+#    #+#             */
/*   Updated: 2023/05/05 11:03:14 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puthex(unsigned long int nb, char *base, int *len)
{
	char	c;

	if (nb < 16)
	{
		c = base[nb];
		ft_putchar(c, len);
	}
	if (nb >= 16)
	{
		c = base[nb % 16];
		nb = nb / 16;
		ft_puthex(nb, base, len);
		ft_putchar(c, len);
	}
}
