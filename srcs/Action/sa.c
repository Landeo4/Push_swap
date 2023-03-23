/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 19:26:04 by tpotilli@st       #+#    #+#             */
/*   Updated: 2023/03/23 22:17:10 by tpotilli         ###   ########.fr       */
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

/*
List *sa(t_pile *list_a, int pos)
{
	(void)pos;
	
	t_pile *first;
	t_pile *second;

	first = list_a;
	second = list_a;
	if (ft_len_list(list_a) < 2)
		return (list_a);
	if (ft_isemptyList(list_a))
		return (list_a);
	int tmp = list_a->data;
    list_a->data = list_a->next->data;
    list_a->next->data = tmp;
	return (list_a);
}
*/

List *sa(t_pile *list_a)
{
	int tmp1;
	int pos;

	pos = ft_len_list(list_a);
    if (list_a == NULL || list_a->next == NULL)
    {
        return list_a;
    }

    List *first = list_a;
    List *second = first->next;
	tmp1 = ft_search(first, pos);
	first->data = second->data;
	second->data = tmp1;
    list_a = second;
    return list_a;
}

int	ft_search(List *list_a, int pos)
{
	int i;
	List *cur;
	List *prec;
	int tmp;

	prec = list_a;
	cur = list_a;
	i = 0;
	while (i <= pos)
	{
		i++;
		prec = cur;
		cur = cur->next;
	}
	tmp = prec->data;
	return (tmp);
}
