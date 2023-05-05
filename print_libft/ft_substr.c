/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:23:12 by mherrezu          #+#    #+#             */
/*   Updated: 2022/10/08 19:01:41 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Reserva (con malloc(3)) y devuelve una substring de la string ’s’.
// La substring empieza desde el índice ’start’ y tiene una longitud máxima len.
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;
	size_t	leng;

	i = 0;
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	if (start + len > ft_strlen(s))
		leng = ft_strlen(s) - start;
	else
		leng = len;
	subs = (char *) malloc ((leng + 1) * sizeof (char));
	if (!subs)
		return (0);
	while (i < leng)
	{
		subs[i] = s[start];
		i++;
		start++;
	}
	subs[i] = '\0';
	return (subs);
}
