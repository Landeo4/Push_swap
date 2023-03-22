/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 19:26:04 by tpotilli@st       #+#    #+#             */
/*   Updated: 2023/03/22 15:59:23 by tpotilli         ###   ########.fr       */
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
** It will swap the first and the second number in the list a
*/

void sa(t_pile *list_a)
{
	t_pile *cur= list_a;
	t_pile *prec = list_a;

	if (ft_len_list(list_a) < 2)
		return ;
	if (ft_isemptyList(list_a))
		return ;
	prec = cur;
	cur = cur->next;
	prec->next = cur;
	return ;
}
