/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthorell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 20:23:21 by pthorell          #+#    #+#             */
/*   Updated: 2018/07/09 20:50:44 by pthorell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	unsigned char u_char;

	u_char = M_UCHAR(c);
	if (u_char >= '0' && u_char <= '9')
		return (1);
	else if (u_char >= 'a' && u_char <= 'z')
		return (1);
	else if (u_char >= 'A' && u_char <= 'Z')
		return (1);
	else
		return (0);
}
