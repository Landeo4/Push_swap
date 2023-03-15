/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:50:56 by tpotilli          #+#    #+#             */
/*   Updated: 2023/03/15 16:04:18 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

/*
**	This function takes as parameter: 
**
**	t_pile *s the name of the struct
**
**	t_pile *list_a : name of the first list
** =====================================================
** =====================================================
**
** It will shift every element one time up in list a
*/

void ra(t_pile *list_a)
{
	int i;
	int len;
	t_pile *cur;
	t_pile *prec;
	t_pile *pile;

	pile = ft_AddCell(list_a);
	cur = list_a;
	prec = list_a;
	i = 0;
	len = ft_len_list(list_a);
	while (i < len)
	{
		i++;
		prec = cur;
		cur = cur->next;
	}
	prec->next = pile;
	pile->next = cur;
	return (list_a);
}