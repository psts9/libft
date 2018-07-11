/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthorell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 22:48:38 by pthorell          #+#    #+#             */
/*   Updated: 2018/07/10 14:30:28 by pthorell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*dst;

	i = 0;
	dst = malloc(ft_strlen(s) + 1);
	while (s[i])
	{
		dst[i] = f(s[i]);
		++i;
	}
	dst[i] = '\0';
	return (dst);
}
