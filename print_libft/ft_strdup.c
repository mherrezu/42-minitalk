/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:40:39 by mherrezu          #+#    #+#             */
/*   Updated: 2022/10/09 18:33:27 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// allocates sufficient memory for a copy of the string src, does the copy, and 
// returns a pointer to it.  The pointer may subsequently be used as an argument
// to the function free(3).
#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dst;
	int		s_size;
	int		i;

	i = 0;
	dst = NULL;
	s_size = (ft_strlen(src) + 1);
	dst = (char *) malloc (s_size * sizeof (char));
	if (!dst)
		return (NULL);
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
