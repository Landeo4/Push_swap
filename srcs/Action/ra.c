/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 17:12:31 by tpotilli          #+#    #+#             */
/*   Updated: 2023/03/27 19:45:56 by tpotilli         ###   ########.fr       */
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
** take the first element on the top of b and put it in top a
** prend le premier element en haut de b et le met en haut de a
**
** Décale d’une position vers le haut tous les élements de la pile a.
** Le premier élément devient le dernier.
*/

t_list_a *ra(t_list_a *la)
{
	t_list_a *tmp;
	int i;
	int recup;

	tmp = la->next;
	i = 0;
	while (tmp->next)
	{
		tmp = tmp->next;
		i++;
	}
	i++;
	recup = tmp->data;
	tmp = la;
	tmp = ft_freeAta(tmp, i);
	tmp = ft_addAta(tmp, recup, 1);
	return (tmp);
}
