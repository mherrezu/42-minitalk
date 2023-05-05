/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 10:09:40 by mherrezu          #+#    #+#             */
/*   Updated: 2022/10/01 19:48:27 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//strlcpy() copies up to dstsize - 1 characters from the string src to dst,
//NUL-terminating the result if dstsize is not 0.
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	c;

	c = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while ((c < (dstsize - 1)) && (src[c] != '\0'))
	{
		dst[c] = src[c];
		c++;
	}
	dst[c] = '\0';
	return (ft_strlen(src));
}
