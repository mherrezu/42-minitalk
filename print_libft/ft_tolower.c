/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 20:13:07 by mherrezu          #+#    #+#             */
/*   Updated: 2022/10/01 20:15:55 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Converts the given character to lowercase according to the character 
//conversion rules defined by the currently installed C locale.
#include "libft.h"

int	ft_tolower(int ch)
{
	char			result;

	if (!(ch >= 65 && ch <= 90))
		return (ch);
	else
	{
		result = ch + 32;
		return ((int)result);
	}
}
