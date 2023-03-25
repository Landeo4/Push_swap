/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_List1_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 16:27:53 by tpotilli          #+#    #+#             */
/*   Updated: 2023/03/25 18:03:32 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list_b *ft_createCellb(int data)
{
	t_list_b *cell;
	cell = malloc(sizeof(t_list_b));
	if (!cell)
		return (NULL);
	cell->data = data;
	cell->next = NULL;
	return (cell);
}

t_list_b *ft_first_lb(t_list_b *lb)
{
	lb = malloc(sizeof(t_list_b));
	/*
	if (!lb)
		return (NULL);*/
	lb->next = NULL;
	return (lb);
}

t_list_b *ft_addAtb(t_list_b *lb, int data, int pos)
{
	t_list_b *prec;
	t_list_b *cur;
	int i;
	t_list_b *cell;

	cell = ft_createCellb(data);
	prec = lb;
	cur = lb;
	if (lb == NULL)
		return (cell);
	if (pos == 0)
	{
		cell->next = lb;
		return (cell);
	}
	i = 0;
	while (i < pos)
	{
		i++;
		prec = cur;
		cur = cur->next;
	}
	prec->next = cell;
	cell->next = cur;
	return (lb);
}

int ft_print_listb(t_list_b *lb)
{
	t_list_b *tmp;

	tmp = lb->next;
	if (!tmp)
		return (-1);
	while (tmp)
	{
		printf("%d\n", tmp->data);
		tmp = tmp->next;
	}
	return (1);
}

t_list_b *ft_free_listb(t_list_b *lb)
{
	t_list_b *tmp;

	tmp = NULL;
	while (lb)
	{
		tmp = lb->next;
		free(lb);
		lb = tmp;
	}
	return (lb);
}
