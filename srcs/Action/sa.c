/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 19:26:04 by tpotilli@st       #+#    #+#             */
/*   Updated: 2023/03/15 17:24:47 by tpotilli         ###   ########.fr       */
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
	int i;
	t_pile *cur= list_a;
	t_pile *prec = list_a;

	i = 0;
	if (ft_len_list(list_a) < 2)
		return (0);
	if (ft_isEmptyList(list_a))
		return (NULL);
	prec = cur;
	cur = cur->next;
	prec->next = cur;
	return (list_a);
}
