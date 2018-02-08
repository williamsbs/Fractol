/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_keyfunc2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsabates <wsabates@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/06 19:45:54 by wsabates          #+#    #+#             */
/*   Updated: 2018/02/08 13:56:14 by wsabates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fract.h"

int		ft_keyfunc9(int keycode, t_var *var)
{
	if (keycode == 2)
	{
		var->draw.lave += 1;
		if (var->draw.lave == 17)
			var->draw.num += 1;
		if (var->draw.lave >= 17)
			var->draw.lave = 0;
		if (keycode == 19)
		{
			var->draw.r += 5;
			var->draw.b += -5;
			var->draw.g += 5;
		}
	}
	return (0);
}

int		ft_keyfunc8(int keycode, t_var *var)
{
	if (keycode == 29)
		var->draw.c_i -= 0.05;
	if (keycode == 27)
		var->draw.c_i += 0.05;
	if (keycode == 31)
		var->draw.op += 1;
	if (keycode == 35)
		var->draw.op -= 1;
	if (keycode == 17)
	{
		var->draw.presst = "";
		ft_aff(var);
	}
	if (keycode == 1)
		var->draw.k += 1;
	ft_keyfunc9(keycode, var);
	return (0);
}

int		ft_keyfunc7(int keycode, t_var *var)
{
	if (keycode == 22)
	{
		var->draw.r += -5;
		var->draw.b += -5;
		var->draw.g += 5;
	}
	if (keycode == 5)
		var->draw.color = 2;
	if (keycode == 15)
		var->draw.color = 1;
	if (keycode == 11)
		var->draw.color = 3;
	if (keycode == 51)
	{
		init_color(var);
		init_struct(var);
	}
	if (keycode == 28)
		var->draw.c_r += 0.05;
	if (keycode == 25)
		var->draw.c_r -= 0.05;
	ft_keyfunc8(keycode, var);
	return (0);
}

int		ft_keyfunc6(int keycode, t_var *var)
{
	if (keycode == 22)
	{
		var->draw.r += -5;
		var->draw.b += -5;
		var->draw.g += 5;
	}
	if (keycode == 5)
		var->draw.color = 2;
	if (keycode == 15)
		var->draw.color = 1;
	if (keycode == 11)
		var->draw.color = 3;
	if (keycode == 51)
	{
		init_color(var);
		init_struct(var);
	}
	if (keycode == 28)
		var->draw.c_r += 0.05;
	if (keycode == 25)
		var->draw.c_r -= 0.05;
	ft_keyfunc7(keycode, var);
	return (0);
}

int		ft_keyfunc5(int keycode, t_var *var)
{
	if (keycode == 20)
	{
		var->draw.r += -5;
		var->draw.b += 5;
		var->draw.g += 5;
	}
	if (keycode == 21)
	{
		var->draw.r += 5;
		var->draw.b += -5;
		var->draw.g += -5;
	}
	if (keycode == 23)
	{
		var->draw.r += -5;
		var->draw.b += 5;
		var->draw.g += -5;
	}
	ft_keyfunc6(keycode, var);
	return (0);
}
