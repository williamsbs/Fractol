/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsabates <wsabates@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 07:37:36 by wsabates          #+#    #+#             */
/*   Updated: 2017/11/14 19:03:34 by wsabates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*str;

	i = 0;
	str = NULL;
	if (s1 != NULL && s2 != NULL)
	{
		str = (char*)malloc(sizeof(str) * ft_strlen(s1) + ft_strlen(s2) + 1);
		if (str != NULL)
		{
			while (*s1 != '\0')
			{
				str[i] = *s1++;
				i++;
			}
			while (*s2 != '\0')
			{
				str[i] = *s2++;
				i++;
			}
			str[i] = '\0';
		}
	}
	return (str);
}
