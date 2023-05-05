/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 20:16:54 by mherrezu          #+#    #+#             */
/*   Updated: 2022/10/01 20:59:09 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//writes n zeroed bytes to the string s.  If n is zero, bzero() does nothing.
//Poner a 0 la región de memoria
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int	count;
	char			*s_aux;

	s_aux = (char *) s;
	count = 0;
	while (n > count)
	{
		s_aux[count] = 0;
		count++;
	}
}
