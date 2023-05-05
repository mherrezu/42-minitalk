/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:05:47 by mherrezu          #+#    #+#             */
/*   Updated: 2022/10/02 11:59:11 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The memset() function writes len bytes of value c (converted to an 
//unsigned char) to the string b.
#include "libft.h"

void	*ft_memset(void *dst, int c, size_t len)
{
	unsigned int	counter;
	unsigned char	c_aux;
	unsigned char	*dst_aux;

	dst_aux = (unsigned char *)dst;
	c_aux = (unsigned char)c;
	counter = 0;
	while (counter < len)
	{
		dst_aux[counter] = c_aux;
		counter++;
	}
	return (dst);
}
