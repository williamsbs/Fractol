/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsabates <wsabates@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 15:32:05 by wsabates          #+#    #+#             */
/*   Updated: 2018/02/08 16:21:21 by wsabates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fract.h"

static void	ft_aff_error(int code)
{
	if (code == -1)
		ft_putendl("ESC");
	else if (code == 0)
		ft_putstr("Usage : ./fractol <filename> [ ex :./fractol Mandelbrot ] \
		\n\n filename valid: {Mandelbrot}\n\t\t {Julia}\n\t\t {Tricorn}\n\t\t \
{Flower}\n\t\t {Bubble}\n\t\t {Mandelbrot2}\n\t\t {Julia2}\n\t\t \
{Mandelbrot_psy}\n\t\t {psy}\n\t\t {mega_psy}\n\t\t {burnningship}\n\r");
}

int			ft_exit(int i)
{
	ft_aff_error(i);
	exit(0);
}
