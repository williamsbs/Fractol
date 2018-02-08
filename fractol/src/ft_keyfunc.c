/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_keyfunc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsabates <wsabates@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/06 19:39:14 by wsabates          #+#    #+#             */
/*   Updated: 2018/02/06 19:52:45 by wsabates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fract.h"

int		ft_keyfunc4(int keycode, t_var *var)
{
	if (keycode == 92)
	{
		var->draw.fract = 9;
		init_struct(var);
	}
	if (keycode == 6)
	{
		var->draw.fract = 10;
		init_struct(var);
	}
	if (keycode == 7)
	{
		var->draw.fract = 11;
		init_struct(var);
	}
	if (keycode == 18)
	{
		var->draw.r += 5;
		var->draw.b += 5;
		var->draw.g += -5;
	}
	ft_keyfunc5(keycode, var);
	return (0);
}

int		ft_keyfunc3(int keycode, t_var *var)
{
	if (keycode == 87)
	{
		var->draw.fract = 5;
		init_struct(var);
	}
	if (keycode == 88)
	{
		var->draw.fract = 6;
		init_struct(var);
	}
	if (keycode == 89)
	{
		var->draw.fract = 7;
		init_struct(var);
	}
	if (keycode == 91)
	{
		var->draw.fract = 8;
		init_struct(var);
	}
	ft_keyfunc4(keycode, var);
	return (0);
}

int		ft_keyfunc2(int keycode, t_var *var)
{
	if (keycode == 83)
	{
		var->draw.fract = 1;
		init_struct(var);
	}
	if (keycode == 84)
	{
		var->draw.fract = 2;
		init_struct(var);
	}
	if (keycode == 85)
	{
		var->draw.fract = 3;
		init_struct(var);
	}
	if (keycode == 86)
	{
		var->draw.fract = 4;
		init_struct(var);
	}
	ft_keyfunc3(keycode, var);
	return (0);
}

int		ft_keyfunc(int keycode, t_var *var)
{
	if (keycode == 69)
		var->draw.fmv += 0.05;
	if (keycode == 78)
		var->draw.fmv -= 0.05;
	if (keycode == 123)
		var->draw.movex += 0.05;
	if (keycode == 124)
		var->draw.movex -= 0.05;
	if (keycode == 125)
		var->draw.movey += 0.05;
	if (keycode == 126)
		var->draw.movey -= 0.05;
	if (keycode == 12)
		var->draw.zoom -= 50;
	if (keycode == 0)
		var->draw.zoom += 50;
	if (keycode == 67)
		var->draw.iteration_max += 1;
	if (keycode == 75)
		var->draw.iteration_max -= 1;
	ft_keyfunc2(keycode, var);
	return (0);
}
