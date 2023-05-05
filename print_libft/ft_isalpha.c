/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 19:04:21 by mherrezu          #+#    #+#             */
/*   Updated: 2022/10/01 16:16:45 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Checks if the given character is an alphabetic character
#include "libft.h"

int	ft_isalpha(int c)
{	
	char	a;

	a = c + '0';
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
