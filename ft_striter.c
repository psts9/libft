/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   striter.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthorell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 21:55:36 by pthorell          #+#    #+#             */
/*   Updated: 2018/07/09 23:18:02 by pthorell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_striter(char *s, void (*f)(char *))
{
	int i;

	i = 0;
	while (s[i])
	{
		f(&(s[i]));
		++i;
	}
}