/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:52:27 by mherrezu          #+#    #+#             */
/*   Updated: 2022/10/09 13:36:18 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Reserva (con malloc(3)) y devuelve una nueva string, formada por la 
// concatenación de ’s1’ y ’s2’.

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	i;
	size_t	len;

	if (!s1 && !s2)
		return (0);
	len = (ft_strlen(s1) + ft_strlen(s2) + 1);
	s3 = (char *) malloc (len * sizeof (char));
	if (!s3)
		return (0);
	if (s1 && s2)
	{
		i = ft_strlen(s1);
		ft_strlcpy(s3, s1, i + 1);
		ft_strlcpy(&s3[i], s2, (ft_strlen(s2) + 1));
	}
	return (s3);
}
