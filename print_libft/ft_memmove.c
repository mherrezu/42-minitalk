/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 12:45:47 by mherrezu          #+#    #+#             */
/*   Updated: 2022/10/03 20:08:06 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//copies len bytes from string src to string dst.  The two strings may overlap;
//the copy is always done in a non-destructive manner.
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d_aux;
	unsigned char	*s_aux;
	unsigned int	counter;

	d_aux = (unsigned char *)dst;
	s_aux = (unsigned char *)src;
	counter = 0;
	if (!d_aux && !s_aux)
		return (0);
	if (d_aux > s_aux)
	{
		while (len--)
			d_aux[len] = s_aux[len];
	}
	else
	{
		while (counter < len)
		{
			d_aux[counter] = s_aux[counter];
			counter++;
		}
	}
	return (d_aux);
}
