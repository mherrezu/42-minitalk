/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:40:40 by mherrezu          #+#    #+#             */
/*   Updated: 2022/10/09 18:30:18 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//locates the last occurrence of c (converted to a char) in the string pointed 
//to by s.  The terminating null character is considered to be part of the 
//string; therefore if c is `\0', the functions locate the terminating `\0'.
#include "libft.h"

char	*ft_strrchr( const char *str, int ch )
{
	char			*s;
	char			c;
	char			*res;

	s = (char *) str;
	c = (char) ch;
	res = 0;
	while (*s != '\0')
	{
		if (*s == c)
			res = s;
		s++;
	}
	if (c == '\0')
		res = s;
	return (res);
}

// int	main(void)
// {
// const char  str[] = "Holaquetal";
// const char  ch = 'H';
// char        *ret;
// ret = ft_strrchr(str, ch);
// printf("String after |%c| is - |%s|\n", ch, ret);
// return (0);
// }
