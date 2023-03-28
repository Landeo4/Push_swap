/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 19:47:30 by tpotilli          #+#    #+#             */
/*   Updated: 2023/03/27 19:48:00 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
**	This function takes as parameter: 
**
**	t_list_b the name of the struct
**
**	la : name of the list b
** =====================================================
** =====================================================
**
** take the first element on the top of b and put it in top a
** prend le premier element en haut de b et le met en haut de a
**
** Décale d’une position vers le haut tous les élements de la pile a.
** Le premier élément devient le dernier.
*/

t_list_b *rb(t_list_a *lb)
{
	t_list_b *tmp;
	int i;
	int recup;

	tmp = lb->next;
	i = 0;
	while (tmp->next)
	{
		tmp = tmp->next;
		i++;
	}
	i++;
	recup = tmp->data;
	tmp = lb;
	tmp = ft_freeAtb(tmp, i);
	tmp = ft_addAtb(tmp, recup, 1);
	return (tmp);
}
