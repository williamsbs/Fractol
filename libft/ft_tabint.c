/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsabates <wsabates@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 13:28:29 by wsabates          #+#    #+#             */
/*   Updated: 2018/02/06 20:11:15 by wsabates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	**ft_tabint(int ymax, int xmax)
{
	int **tabint;
	int i;

	i = 0;
	if (!(tabint = (int **)malloc(sizeof(int*) * ymax)))
		return (NULL);
	while (i < ymax)
	{
		if (!(tabint[i] = (int*)malloc(sizeof(int) * xmax)))
			return (NULL);
		i++;
	}
	return (tabint);
}
