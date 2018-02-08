/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_struct3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsabates <wsabates@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/06 16:15:22 by wsabates          #+#    #+#             */
/*   Updated: 2018/02/06 16:16:07 by wsabates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fract.h"

void	init_struct_psy(t_var *var)
{
	var->draw.x1 = -2;
	var->draw.x2 = 1;
	var->draw.y1 = -2;
	var->draw.y2 = 1.2;
	var->draw.x = 0;
	var->draw.y = 0;
	var->draw.i = 0;
	var->draw.zoom = 200;
	var->draw.tmp = 0;
	var->draw.fmv = 2;
	var->draw.iteration_max = 50;
	var->draw.movex = 0;
	var->draw.movey = 0;
	var->draw.r = 0;
	var->draw.g = 0;
	var->draw.b = 0;
	var->draw.color = 1;
	var->draw.op = 7;
	ft_psy(var);
}

void	init_struct_mega_psy(t_var *var)
{
	var->draw.x1 = -2;
	var->draw.x2 = 1;
	var->draw.y1 = -2;
	var->draw.y2 = 1.2;
	var->draw.x = 0;
	var->draw.y = 0;
	var->draw.i = 0;
	var->draw.zoom = 200;
	var->draw.tmp = 0;
	var->draw.fmv = 2;
	var->draw.iteration_max = 50;
	var->draw.movex = 0;
	var->draw.movey = 0;
	var->draw.r = 0;
	var->draw.g = 0;
	var->draw.b = 0;
	var->draw.color = 1;
	var->draw.op = 7;
	ft_mega_psy(var);
}
