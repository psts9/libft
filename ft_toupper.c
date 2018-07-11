/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthorell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 20:41:22 by pthorell          #+#    #+#             */
/*   Updated: 2018/07/10 19:16:17 by pthorell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	unsigned char u_char;

	u_char = (unsigned char)c;
	if (u_char >= 'a' && u_char <= 'z')
		u_char -= 32;
	return (u_char);
}
