/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthorell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 23:27:49 by pthorell          #+#    #+#             */
/*   Updated: 2018/07/10 14:28:03 by pthorell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		total_length;

	total_length = ft_strlen(s1) + ft_strlen(s2);
	result = ft_strnew(total_length);
	ft_strcpy(result, s1);
	ft_strcat(result, s2);
	return (result);
}
