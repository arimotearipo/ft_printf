/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-taj <wwan-taj@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 11:44:17 by wwan-taj          #+#    #+#             */
/*   Updated: 2021/12/09 11:44:19 by wwan-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putaddr(void *num, int *p_i)
{
	ft_putstr("0x", p_i);
	ft_putlowerhex((unsigned long)num, p_i);
}
