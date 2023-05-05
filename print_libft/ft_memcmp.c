/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:01:50 by mherrezu          #+#    #+#             */
/*   Updated: 2022/10/03 18:17:57 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//compares byte string s1 against byte string s2.  Both strings are assumed to 
//be n bytes long.
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	c;
	unsigned char	*s1_aux;
	unsigned char	*s2_aux;

	s1_aux = (unsigned char *) s1;
	s2_aux = (unsigned char *) s2;
	c = 0;
	while (c < n)
	{
		if (s1_aux[c] != s2_aux[c])
			return (s1_aux[c] - s2_aux[c]);
		c++;
	}
	return (0);
}
