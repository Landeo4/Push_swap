/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_List2_a.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:00:03 by tpotilli@st       #+#    #+#             */
/*   Updated: 2023/03/25 18:27:16 by tpotilli         ###   ########.fr       */
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
	while (tmpa)
	{
		printf("%d  %d\n", tmpa->data, tmpb->data);
		tmpa = tmpa->next;
		tmpb = tmpb->next;
	}
	printf("\n-   -\na   b\n");
	return (1);
}
