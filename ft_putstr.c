/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-taj <wwan-taj@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 10:02:08 by wwan-taj          #+#    #+#             */
/*   Updated: 2021/12/02 10:02:14 by wwan-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *p_i)
{
	if (str == NULL)
		ft_putstr("(null)", p_i);
	else
	{
		while (*str)
		{
			ft_putchar(*str, p_i);
			str++;
		}
	}
}
