/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:59:42 by tpotilli          #+#    #+#             */
/*   Updated: 2023/03/15 14:01:31 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
**	This function takes as parameter: 
**
**	t_pile *s the name of the struct
**
**	t_pile *list_a : name of the first list
**
**	t_pile *list_b : name of the second list
** =====================================================
** =====================================================
**
** It will swap the first and the second number in the list a and b
*/

void ss(t_pile *s, t_pile *list_a, t_pile *list_b)
{
	sa(s, list_a);
	sb(s, list_b);
}
