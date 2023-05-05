/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 11:42:54 by mherrezu          #+#    #+#             */
/*   Updated: 2022/10/02 18:20:17 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//compares not more than n characters.
//characters that appear after a `\0' character are not compared.
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	c;
	unsigned char	*s1_aux;
	unsigned char	*s2_aux;

	s1_aux = (unsigned char *) s1;
	s2_aux = (unsigned char *) s2;
	c = 0;
	while (c < n && (s1_aux[c] != '\0' || s2_aux[c] != '\0'))
	{
		if (s1_aux[c] != s2_aux[c])
			return (s1_aux[c] - s2_aux[c]);
		c++;
	}
	return (0);
}
/*int main()
{
	const char s1[] = "holP";
	const char s2[] = "";
	unsigned	int n;

	n = 100;
	
	printf("programa :%d\n", strncmp(s1, s2, n));
	printf("%d", ft_strncmp(s1, s2, n));
	return(0);
}*/
