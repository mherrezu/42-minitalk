/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:08:11 by mherrezu          #+#    #+#             */
/*   Updated: 2022/10/01 15:19:42 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//test for ASCII character
#include "libft.h"

int	ft_isascii(int c)
{
	char	a;

	a = c + '0';
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
