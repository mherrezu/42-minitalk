/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:47:46 by mherrezu          #+#    #+#             */
/*   Updated: 2022/10/12 17:03:10 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Utilizando malloc(3), genera una string que represente el valor entero
// recibido como argumento. Los números negativos tienen que gestionarse.
#include "libft.h"

int		count(int n, int i);
char	*change(char *str, int n, int c);

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		c;

	i = 0;
	i = count(n, i);
	str = (char *)malloc((i + 1) * sizeof(char));
	if (!str)
		return (0);
	c = 0;
	str[i] = '\0';
	str = change(str, n, i - 1);
	return (str);
}

int	count(int n, int i)
{
	if (n < 0)
	{
		if (n == -2147483648)
			i = 9;
		i++;
		n = -n;
	}
	if (n >= 10)
	{
		i = count((n / 10), i);
		i = count((n % 10), i);
	}
	else
		i++;
	return (i);
}

char	*change(char *str, int n, int i)
{
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
		if (n == -2147483648)
		{
		str[1] = '2';
		n = 147483648;
		}
	}
	if (n <= 9)
	{
		str[i] = n + '0';
		i--;
	}
	if (n >= 10)
	{
		change(str, (n % 10), i);
		i--;
		change(str, (n / 10), i);
		i--;
	}
	return (str);
}

// int	main(void)
// {
// 	int	n;

// 	n = -21474836;
// 	printf("%s", ft_itoa(n));
// 	return (0);
// }
