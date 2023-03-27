/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_List1_a.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 13:29:19 by tpotilli@st       #+#    #+#             */
/*   Updated: 2023/03/27 15:25:55 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list_a *ft_createCella(int data)
{
	t_list_a *cell;
	cell = malloc(sizeof(t_list_a));
	if (!cell)
		return (NULL);
	cell->data = data;
	cell->next = NULL;
	return (cell);
}

t_list_a *ft_first_la(t_list_a *la)
{
	la = malloc(sizeof(t_list_a));
	/*
	if (!la)
		return (NULL);*/
	la->next = NULL;
	return (la);
}

t_list_a *ft_addAta(t_list_a *la, int data, int pos)
{
	t_list_a *prec;
	t_list_a *cur;
	int i;
	t_list_a *cell;

	cell = ft_createCella(data);
	prec = la;
	cur = la;
	if (la == NULL)
		return (cell);
	if (pos == 0)
	{
		cell->next = la;
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
	return (la);
}

int ft_print_lista(t_list_a *la)
{
	t_list_a *tmp;

	tmp = la->next;
	if (!tmp)
		return (-1);
	printf("la liste A vaut\n");
	while (tmp)
	{
		printf("%d\n", tmp->data);
		tmp = tmp->next;
	}
	return (1);
}

t_list_a *ft_free_lista(t_list_a *la)
{
	t_list_a *tmp;

	tmp = NULL;
	while (la)
	{
		tmp = la->next;
		free(la);
		la = tmp;
	}
	return (la);
}

