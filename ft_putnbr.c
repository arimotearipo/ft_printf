/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-taj <wwan-taj@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 10:01:31 by wwan-taj          #+#    #+#             */
/*   Updated: 2021/12/02 10:01:54 by wwan-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int num, int *p_i)
{
	char	c;
	long	newnum;

	newnum = num;
	if (newnum < 0)
	{
		ft_putchar('-', p_i);
		newnum = newnum * -1;
	}
	if (newnum >= 0 && newnum < 10)
	{
		c = newnum + '0';
		ft_putchar(c, p_i);
	}
	else
	{
		ft_putnbr(newnum / 10, p_i);
		ft_putnbr(newnum % 10, p_i);
	}
}
