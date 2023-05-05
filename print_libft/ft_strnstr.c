/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 16:55:43 by mherrezu          #+#    #+#             */
/*   Updated: 2022/10/07 19:13:30 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//locates the first occurrence of the null-terminated string needle in the
//string haystack, where not more than len characters are searched.
//Characters that appear after a '\0' character are not searched.
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;

	i = 0;
	if (*needle == 0 || haystack == needle)
		return ((char *)haystack);
	i = ft_strlen(needle);
	while (*haystack && i <= len)
	{
		if (!(ft_strncmp(haystack, needle, i)))
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (0);
}
