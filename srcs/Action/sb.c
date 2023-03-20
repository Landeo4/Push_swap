/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:58:11 by tpotilli          #+#    #+#             */
/*   Updated: 2023/03/17 16:57:01 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
**	This function takes as parameter: 
**
**	t_pile *s the name of the struct
**
**	t_pile *list_b : name of the second list
** =====================================================
** =====================================================
**
** It will swap the first and the second number in the list b
*/

void sb(t_pile *list_b)
{
	int i;
	t_pile *cur= list_b;
	t_pile *prec = list_b;

	i = 0;
	if (ft_len_list(list_b) < 2)
		return (0);
	if (ft_isEmptyList(list_b))
		return (NULL);
	prec = cur;
	cur = cur->next;
	prec->next = cur;
	return (list_b);
}
