/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 14:04:46 by mherrezu          #+#    #+#             */
/*   Updated: 2023/03/14 12:57:42 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//then takes as many characters as possible to form a valid integer number 
//representation and converts them to an integer value. 
int	ft_atoi(const char *str)
{
	int	c;
	int	sign;
	int	result;

	c = 0;
	while (str[c] == ' ' || str[c] == '\n' || str[c] == '\f'
		|| str[c] == '\r' || str[c] == '\t' || str[c] == '\v')
	{
		c++;
	}
	sign = 1;
	if (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			sign = sign * (-1);
		c++;
	}
	result = 0;
	while (str[c] >= '0' && str[c] <= '9')
	{	
		result = (result * 10) + (str[c] - 48);
		c++;
	}
	return (result * sign);
}
/*int	main()
{
	char	str[] = " ---+--+1234ab567";

	printf("El programa: %d\n", atoi(str));
	printf("%d", ft_atoi(str));
	return(0);
}*/
