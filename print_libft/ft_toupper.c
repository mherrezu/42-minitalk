/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 19:49:27 by mherrezu          #+#    #+#             */
/*   Updated: 2022/10/01 20:10:34 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Converts the given character to uppercase according to the character 
//conversion rules defined by the currently installed C locale.
#include "libft.h"

int	ft_toupper(int ch)
{
	char			result;

	if (!(ch >= 97 && ch <= 122))
		return (ch);
	else
	{
		result = ch - 32;
		return ((int)result);
	}
}
