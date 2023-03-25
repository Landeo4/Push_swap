/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_List2_a.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:00:03 by tpotilli@st       #+#    #+#             */
/*   Updated: 2023/03/25 16:35:44 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_len_list(t_list_a *la)
{
	int len;

	len = 0;
	while (la)
	{
		len++;
		la = la->next;
	}
	return (len);
}

int ft_getAt(t_list_a *la, int pos)
{
	int i;

	i = 0;
	if (la == NULL)
	{
		printf("liste vide\n");
		return (-1);
	}
	while (i < pos)
	{
		i++;
		la = la->next;
	}
	return (la->data);
}
