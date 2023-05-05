/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:46:10 by mherrezu          #+#    #+#             */
/*   Updated: 2023/05/05 11:02:45 by mherrezu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	conversion(char const c, va_list arg, int *len)
{
	if (c == 'c')
		ft_putchar(va_arg(arg, int), len);
	if (c == 's')
		ft_putstr(va_arg(arg, char *), len);
	if (c == 'p')
	{
		ft_putstr("0x", len);
		ft_puthex(va_arg(arg, unsigned long int), "0123456789abcdef", len);
	}
	if (c == 'i' || c == 'd')
		ft_putnbr(va_arg(arg, int), len);
	if (c == 'u')
		ft_putunsigned(va_arg(arg, unsigned int), len);
	if (c == 'x')
		ft_puthex(va_arg(arg, unsigned int), "0123456789abcdef", len);
	if (c == 'X')
		ft_puthex(va_arg(arg, unsigned int), "0123456789ABCDEF", len);
	if (c == '%')
		ft_putchar('%', len);
}

int	ft_printf(char const *str, ...)
{
	int		i;
	int		len;
	va_list	arg;

	if (!str)
		str = "(null)";
	i = 0;
	len = 0;
	va_start(arg, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			conversion(str[i], arg, &len);
		}
		else
			ft_putchar(str[i], &len);
		i++;
	}
	va_end(arg);
	return (len);
}
