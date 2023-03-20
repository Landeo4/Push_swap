/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:00:03 by tpotilli@st       #+#    #+#             */
/*   Updated: 2023/03/19 18:46:54 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

List *ft_Addnumber(List *s, int data, int pos)
{
	List *cur;
	List *prec;
	int i;
	List *cell = ft_AddCell(s);
	
	cur = s;
	prec = s;
	if (ft_isEmptyList(s))
		return (cell);
	if (pos == 0)
	{
		cell->next = s;
		return (cell);
	}
	i = 0;
	while (i < pos)
	{
		i++;
		prec = cur;
		cur = cur->next;
	}
	prec->next = cell;
	cell->next = cur;
	return (s);
}

int ft_len_list(List *s)
{
	long len = 0;
	while(s)
	{
		len++;
		s = s->next;
	}
	return (len);
}

int ft_getAt(t_pile *s, int pos)
{
	int i;

	i = 0;
	if (is_Emptylist(s))
	{
		write(1, "liste vide", 11);
		return (0);
	}
	while (i < pos)
	{
		i++;
		s = s->next;
	}
	return (s->data);
}
