/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 13:03:36 by tpotilli          #+#    #+#             */
/*   Updated: 2023/03/29 13:50:19 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
**	This function takes as parameter: 
**
**	t_list_a the name of the struct
**
**	la : name of the list a
** =====================================================
** =====================================================
**
** every element of a will go down
** the first become the last
*/

t_list_a *rra(t_list_a *la)
{
	t_list_a *tmp;
	int i;
	int recup;

	tmp = la->next;
	i = 1;
	while (tmp->next)
	{
		tmp = tmp->next;
		i++;
	}
	recup = tmp->data;
	tmp = la;
	tmp = ft_freeAta(tmp, i);
	tmp = ft_addAta(tmp, recup, 1);
	return (tmp);
}
