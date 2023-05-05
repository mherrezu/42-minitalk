/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:12:58 by mherrezu          #+#    #+#             */
/*   Updated: 2022/10/12 18:18:54 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//locates the first occurrence of c (converted to a char) in the string pointed
//to by s.  The terminating null character is considered to be part of the
//string; therefore if c is `\0', the functions locate the terminating `\0'.
#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	char	*s;

	s = (char *)str;
	while (*s != '\0')
	{
		if (*s == (unsigned char)ch)
			return (s);
		s++;
	}
	if ((unsigned char)ch == '\0')
		return (s);
	return (0);
}

// int	main(void)
// {
// 	char const	*str = "hola que tal hola";
// 	int			ch = "";

// 	printf("Final: %s", ft_strtrim(s1, set));
// 	return (0);
// }