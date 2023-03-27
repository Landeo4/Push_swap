/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_List2_a.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:00:03 by tpotilli@st       #+#    #+#             */
/*   Updated: 2023/03/27 17:06:37 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_len_lista(t_list_a *la)
{
	int len;

	len = 0;
	while (la)
	{
		len++;
		la = la->next;
	}
	return (len);
}

int ft_getAta(t_list_a *la, int pos)
{
	int i;

	i = 0;
	if (la == NULL)
	{
		printf("liste vide\n");
		return (-1);
	}
	while (i < pos)
	{
		i++;
		la = la->next;
	}
	return (la->data);
}

int ft_print_both(t_list_a *la, t_list_b *lb)
{
	t_list_a *tmpa;
	t_list_b *tmpb;

	tmpa = la->next;
	tmpb = lb->next;
	while (tmpa && tmpb)
	{
		printf("%d  %d\n", tmpa->data, tmpb->data);
		tmpa = tmpa->next;
		tmpb = tmpb->next;
	}
	printf("\n-   -\na   b\n");
	return (1);
}

void ft_free_both(t_list_a *la, t_list_b *lb)
{
	t_list_a *tmp1;
	t_list_b *tmp2;
	
	tmp1 = NULL;
	while (la)
	{
		tmp1 = la->next;
		free(la);
		la = tmp1;
	}
	while (lb)
	{
		tmp2 = lb->next;
		free(lb);
		lb = tmp2;
	}
}

t_list_a *ft_freeAta(t_list_a *la, int pos)
{
	int i;
	t_list_a *prec;
	t_list_a *cur;
	t_list_a *tete;

	prec = la;
	cur = la;
	tete = la;
	if (la == NULL)
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
