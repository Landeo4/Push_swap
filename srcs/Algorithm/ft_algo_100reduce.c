/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_100reduce.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 18:25:08 by tpotilli          #+#    #+#             */
/*   Updated: 2023/06/20 18:48:12 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
**	This function takes as parameter: 
**
**	data
**	chunk
** =====================================================
** =====================================================
**
** ft_reduce_managera is used to take the position of the
** little a to able the use of rr or rrr
*/

int		ft_reduce_managera(t_struct *data, int chunk)
{
	int			lita1;
	int			lita2;
	int			lit;
	t_list_a	*la;

	la = data->la->next;
	lita1 = ft_found_pos_little_first_part(data, chunk, la);
	lita2 = ft_found_pos_little_last_part(data, chunk, la);
	if (lita1 < lita2)
		lit = lita1;
	else if (lita1 >= lita2)
	{
		lit = lita2;
		lita2 = lita2 * -1;
	}
	return (lit);
}

/*int		ft_reduce_managerb(t_struct *data)
{
	int			lita1;
	int			lita2;
	int			compare;
	int			lit;
	t_list_a	*la;

	la = data->la->next;
	lita1 = ft_found_pos_little_first_part(data, chunk, la);
	lita2 = ft_found_pos_little_last_part(data, chunk, la);
	if (lita1 < lita2)
		lit = lita1;
	else if (lita1 >= lita2)
	{
		lit = lita2;
		lita2 = lita2 * -1;
	}
	return (lit)
}
*/