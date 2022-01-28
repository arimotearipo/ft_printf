/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwan-taj <wwan-taj@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 09:56:35 by wwan-taj          #+#    #+#             */
/*   Updated: 2021/12/02 09:59:06 by wwan-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>

void	ft_putchar(char c, int *p_i);
void	ft_putstr(char *str, int *p_i);
void	ft_putnbr(int num, int *p_i);
void	ft_putnbr(int num, int *p_i);
void	ft_putlowerhex(unsigned long num, int *p_i);
void	ft_putupperhex(unsigned long num, int *p_i);
int		ft_printf(const char *str, ...);
void	ft_putunsigned(unsigned int num, int *p_i);
void	ft_putaddr(void *num, int *p_i);

#endif
