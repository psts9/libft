/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthorell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 18:43:44 by pthorell          #+#    #+#             */
/*   Updated: 2018/07/10 14:27:41 by pthorell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	u_char;
	int				i;

	i = 0;
	u_char = M_UCHAR(c);
	while (s[i])
	{
		if (s[i] == u_char)
			return ((char*)&s[i]);
		++i;
	}
	if (s[i] == u_char)
		return ((char*)&s[i]);
	else
		return (NULL);
}
