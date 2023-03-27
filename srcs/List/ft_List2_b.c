/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_List2_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 16:28:51 by tpotilli          #+#    #+#             */
/*   Updated: 2023/03/27 17:08:30 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int ft_len_listb(t_list_b *lb)
{
	int len;

	len = 0;
	while (lb)
	{
		len++;
		lb = lb->next;
	}
	return (len);
}

int ft_getAtb(t_list_b *lb, int pos)
{
	int i;

	i = 0;
	if (lb == NULL)
	{
		printf("liste vide\n");
		return (-1);
	}
	while (i < pos)
	{
		i++;
		lb = lb->next;
	}
	return (lb->data);
}

t_list_b *ft_freeAtb(t_list_b *lb, int pos)
{
	int i;
	t_list_b *prec;
	t_list_b *cur;
	t_list_b *tete;

	prec = lb;
	cur = lb;
	tete = lb;
	if (lb == NULL)
		return (NULL);
	if (pos == 0)
	{
		tete = tete->next;
		free(cur);
		return (tete);
	}
	i = 0;
	while (i < pos)
	{
		i++;
		prec = cur;
		cur = cur->next;
	}
	prec->next = cur->next;
	free(cur);
	return (tete);
}
