/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthorell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 17:06:49 by pthorell          #+#    #+#             */
/*   Updated: 2018/07/11 19:07:20 by pthorell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

#include <stdio.h>

void	ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
	if ((*alst)->content)
		del((*alst)->content, (*alst)->content_size);
	if ((*alst)->next)
		free((*alst)->next);
	*alst = NULL;
}
