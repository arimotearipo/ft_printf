/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-taj <wwan-taj@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 10:48:15 by wwan-taj          #+#    #+#             */
/*   Updated: 2021/12/01 10:53:39 by wwan-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	checkflag(char flag, va_list ptr, int *p_i)
{
	if (flag == 'c')
		ft_putchar(va_arg(ptr, int), p_i);
	else if (flag == 's')
		ft_putstr(va_arg(ptr, char *), p_i);
	else if (flag == 'd' || flag == 'i')
		ft_putnbr(va_arg(ptr, int), p_i);
	else if (flag == 'p')
		ft_putaddr(va_arg(ptr, void *), p_i);
	else if (flag == 'x')
		ft_putlowerhex(va_arg(ptr, unsigned int), p_i);
	else if (flag == 'X')
		ft_putupperhex(va_arg(ptr, unsigned int), p_i);
	else if (flag == 'u')
		ft_putunsigned(va_arg(ptr, unsigned int), p_i);
	else if (flag == '%')
		ft_putchar('%', p_i);
}

int	ft_printf(const char *str, ...)
{
	va_list	ptr;
	int		i;

	i = 0;
	va_start(ptr, str);
	while (*str != '\0')
	{
		if (*str != '%')
		{
			ft_putchar(*str, &i);
		}
		else
		{
			checkflag(*(str + 1), ptr, &i);
			str += 1;
		}
		str++;
	}
	va_end(ptr);
	return (i);
}
