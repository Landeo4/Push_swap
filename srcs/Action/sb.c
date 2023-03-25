/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 16:29:04 by tpotilli          #+#    #+#             */
/*   Updated: 2023/03/25 16:37:15 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list_b *sb(t_list_b *lb)
{
	int tmp1;
	t_list_b *first;

	first = lb->next;
	tmp1 = first->data;
	first->data = first->next->data;
	first->next->data = tmp1;

	return (first);
}
