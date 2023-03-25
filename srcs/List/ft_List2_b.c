/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_List2_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 16:28:51 by tpotilli          #+#    #+#             */
/*   Updated: 2023/03/25 17:58:16 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int ft_len_listb(t_list_b *lb)
{
	int len;

	len = 0;
	while (lb)
	{
		len++;
		lb = lb->next;
	}
	return (len);
}

int ft_getAtb(t_list_b *lb, int pos)
{
	int i;

	i = 0;
	if (lb == NULL)
	{
		printf("liste vide\n");
		return (-1);
	}
	while (i < pos)
	{
		i++;
		lb = lb->next;
	}
	return (lb->data);
}
