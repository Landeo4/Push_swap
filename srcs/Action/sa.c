/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 19:26:04 by tpotilli@st       #+#    #+#             */
/*   Updated: 2023/03/25 16:26:40 by tpotilli         ###   ########.fr       */
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

t_list_a *sa(t_list_a *la)
{
	int tmp1;
	t_list_a *first;

	first = la->next;
	tmp1 = first->data;
	first->data = first->next->data;
	first->next->data = tmp1;

	return (first);
}
