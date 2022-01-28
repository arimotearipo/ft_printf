/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlowerhex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-taj <wwan-taj@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 10:26:10 by wwan-taj          #+#    #+#             */
/*   Updated: 2021/12/02 10:26:23 by wwan-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putlowerhex(unsigned long num, int *p_i)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (num < 16)
		ft_putchar(hex[num], p_i);
	else
	{
		ft_putlowerhex(num / 16, p_i);
		ft_putlowerhex(num % 16, p_i);
	}
}
