/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthorell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 23:53:56 by pthorell          #+#    #+#             */
/*   Updated: 2018/07/11 00:35:31 by pthorell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char *string = "split  ||this|for|me|||||!|";
	char **result = ft_strsplit(string, '|');

	int i = 0;
	while (result[i])
		ft_putendl(result[i++]);
	return (0);
}
