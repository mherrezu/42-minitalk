/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 12:00:35 by mherrezu          #+#    #+#             */
/*   Updated: 2022/10/03 19:16:04 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//function copies n bytes from memory area src to memory area dst.If dst and src
//overlap, behavior is unde-fined.
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_aux;
	unsigned char	*src_aux;
	unsigned int	counter;

	dst_aux = (unsigned char *)dst;
	src_aux = (unsigned char *)src;
	counter = 0;
	if (dst == NULL && src == NULL)
		return (dst);
	while (counter < n)
	{
		dst_aux[counter] = src_aux[counter];
		counter++;
	}
	return (dst);
}
