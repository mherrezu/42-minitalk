/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 18:34:16 by mherrezu          #+#    #+#             */
/*   Updated: 2022/10/01 13:16:10 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Returns the length of the given null-terminated byte string 
//that is, the number of characters in a character array whose 
//first element is pointed to by str up to and not including the 
//first null character.
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
