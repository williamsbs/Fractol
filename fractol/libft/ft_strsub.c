/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsabates <wsabates@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 07:19:15 by wsabates          #+#    #+#             */
/*   Updated: 2017/11/15 14:57:43 by wsabates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (!s)
	{
		return (NULL);
	}
	i = ft_strlen(s);
	str = NULL;
	if ((start + len) <= i)
	{
		if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		{
			return (NULL);
		}
		if (str != '\0')
		{
			str = ft_strncpy(str, s + start, len);
			str[len] = '\0';
		}
	}
	return (str);
}
