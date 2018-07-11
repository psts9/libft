/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthorell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 22:48:38 by pthorell          #+#    #+#             */
/*   Updated: 2018/07/10 23:03:25 by pthorell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	if (s && f)
	{
		int		i;
		char	*dst;
	
		i = 0;
		dst = (char*)malloc(ft_strlen(s) + 1);
		if (dst)
		{
			while (s[i])
			{
				dst[i] = f(s[i]);
				++i;
			}
			dst[i] = '\0';
			return (dst);
		}
		else
			return (NULL);
	}
	else
		return (NULL);
}
