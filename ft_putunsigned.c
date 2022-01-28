/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-taj <wwan-taj@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 10:01:31 by wwan-taj          #+#    #+#             */
/*   Updated: 2021/12/02 10:01:54 by wwan-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsigned(unsigned int num, int *p_i)
{
	char	c;

	if (num < 10)
	{
		c = num + '0';
		ft_putchar(c, p_i);
	}
	else
	{
		ft_putunsigned(num / 10, p_i);
		ft_putunsigned(num % 10, p_i);
	}
}
