/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:19:11 by mherrezu          #+#    #+#             */
/*   Updated: 2022/10/12 18:19:29 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Elimina todos los caracteres de la string ’set’ desde el principio y desde el
//final de ’s1’, hasta encontrar un caracter no perteneciente a ’set’.La string
//resultante se devuelve con una reserva de malloc(3)

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;

	if (!s1[0] || !set)
		return (ft_strdup(""));
	start = 0;
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1) - 1;
	while (s1[end] != '\0' && ft_strchr(set, s1[end]) && s1[start] != '\0' )
		end--;
	str = ft_substr(s1, start, end - start + 1);
	return (str);
}

// int	main(void)
// {
// 	char const	*s1 = "hola que tal hola";
// 	char const	*set = "hola";

// 	printf("Final: %s", ft_strtrim(s1, set));
// 	return (0);
// }
