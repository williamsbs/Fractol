/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   witch_fractal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsabates <wsabates@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/06 16:30:33 by wsabates          #+#    #+#             */
/*   Updated: 2018/02/06 17:00:10 by wsabates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fract.h"

void	ft_witch_fract4(char **argv, t_var *var)
{
	if (!ft_strcmp(argv[1], "psy"))
	{
		var->draw.fract = 10;
		var->draw.color = 1;
		var->draw.error = 1;
	}
	if (!ft_strcmp(argv[1], "mega_psy"))
	{
		var->draw.fract = 11;
		var->draw.color = 1;
		var->draw.error = 1;
	}
}

void	ft_witch_fract3(char **argv, t_var *var)
{
	if (!ft_strcmp(argv[1], "Mandelbrot2"))
	{
		var->draw.fract = 7;
		var->draw.color = 1;
		var->draw.error = 1;
	}
	if (!ft_strcmp(argv[1], "Julia2"))
	{
		var->draw.fract = 8;
		var->draw.color = 1;
		var->draw.error = 1;
	}
	if (!ft_strcmp(argv[1], "Mandelbrot_psy"))
	{
		var->draw.fract = 9;
		var->draw.color = 1;
		var->draw.error = 1;
	}
	ft_witch_fract4(argv, var);
}

void	ft_witch_fract2(char **argv, t_var *var)
{
	if (!ft_strcmp(argv[1], "Flower"))
	{
		var->draw.fract = 4;
		var->draw.color = 1;
		var->draw.error = 1;
	}
	if (!ft_strcmp(argv[1], "Bubble"))
	{
		var->draw.fract = 5;
		var->draw.color = 1;
		var->draw.error = 1;
	}
	if (!ft_strcmp(argv[1], "burningship"))
	{
		var->draw.fract = 6;
		var->draw.color = 1;
		var->draw.error = 1;
	}
	ft_witch_fract3(argv, var);
}

void	ft_witch_fract(char **argv, t_var *var)
{
	if (!ft_strcmp(argv[1], "Mandelbrot"))
	{
		var->draw.fract = 1;
		var->draw.color = 1;
		var->draw.error = 1;
	}
	if (!ft_strcmp(argv[1], "Tricorn"))
	{
		var->draw.fract = 2;
		var->draw.color = 1;
		var->draw.error = 1;
	}
	if (!ft_strcmp(argv[1], "Julia"))
	{
		var->draw.fract = 3;
		var->draw.color = 1;
		var->draw.error = 1;
	}
	ft_witch_fract2(argv, var);
}
