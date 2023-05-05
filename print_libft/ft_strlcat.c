/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:33:41 by mherrezu          #+#    #+#             */
/*   Updated: 2022/10/01 19:48:41 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strlcat() appends string src to the end of dst.  It will append at most
//dstsize - strlen(dst) - 1 characters.
#include "libft.h"

int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	c_dest;
	unsigned int	t_dest;
	unsigned int	c_src;

	c_dest = 0;
	c_src = 0;
	while (dest[c_dest] != '\0')
	{
		c_dest++;
	}
	t_dest = c_dest;
	if (size == 0 || t_dest >= size)
		return (ft_strlen(src) + size);
	while ((src[c_src] != '\0') && (c_src < (size - t_dest - 1)))
	{
		dest[c_dest] = src[c_src];
		c_dest++;
		c_src++;
	}
	dest[c_dest] = '\0';
	return (t_dest + ft_strlen(src));
}
/*int main()
{
	char src[] = "adios";
	char dest[] = "adiosS";
	unsigned int size;
	unsigned int result;

	size = 9;
	printf("%lu", strlcat(dest, src, size));
	result = ft_strlcat(dest, src, size);
	printf("%d", result);
	return(0);
}*/
