/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rgb_to_hexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsabates <wsabates@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 16:36:28 by wsabates          #+#    #+#             */
/*   Updated: 2018/02/06 17:02:02 by wsabates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fract.h"

int		rgb_to_hexa(t_var *var)
{
	if (var->draw.r > 255)
		var->draw.r = 55;
	if (var->draw.g > 255)
		var->draw.g = 55;
	if (var->draw.b > 255)
		var->draw.b = 55;
	if (var->draw.r < 0)
		var->draw.r = 0;
	if (var->draw.g < 0)
		var->draw.g = 0;
	if (var->draw.b < 0)
		var->draw.b = 0;
	return ((var->draw.r & 0xff) << 16) + ((var->draw.g & 0xff) << 8) + \
	(var->draw.b & 0xff);
}
