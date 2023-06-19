/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_100_b2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: landeo <landeo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 16:45:19 by tpotilli          #+#    #+#             */
/*   Updated: 2023/06/19 17:50:17 by landeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_100_swap_manager(t_struct *data, int lit1, int lit2, int chunk)
{
	int			cpt;
	t_list_b	*lb;
	int			len;

	cpt = 0;
	len = ft_len_listb(data);
	lb = data->lb->next;
	if (lit1 != -1 && lit2 != -1)
	{
		cpt = ft_found_best_place100(data, lb);
		ft_take_best_place100(data, cpt, chunk);
		data->la = pb(data);
		if (data->lb->next->num < data->lb->next->next->num)
			data->lb = sb(data->lb, data);
		return ;
	}
	else if (lit1 == -1)
		ft_100_lit1(lb, data, cpt, chunk);
	else if (lit2 == -1)
		ft_100_swap_help(data, len, lb, chunk);
}

void	ft_100_lit1(t_list_b *lb, t_struct *data, int cpt, int chunk)
{
	while (lb->next)
		lb = lb->next;
	cpt = ft_found_lower_b(data);
	if (cpt == lb->num)
	{
		data->la = pb(data);
		return ;
	}
	lb = data->lb->next;
	if (cpt == lb->num && data->la->next->num < cpt)
	{
		data->la = pb(data);
		data->lb = sb(data->lb, data);
		return ;
	}
	ft_take_best_place102(data, cpt, chunk);
	data->la = pb(data);
	return ;
}

void	ft_100_swap_help( t_struct *data, int len, t_list_b *lb, int chunk)
{
	ft_make_best_place_alg100(data, lb, chunk);
	data->la = pb(data);
	return ;
	lb = data->lb->next;
	if (len > 4)
	{
		if (data->lb->next->num < data->lb->next->next->num)
		{
			while (lb->next)
				lb = lb->next;
			if (lb->num > data->lb->next->num)
				data->lb = rrb(data);
			else
				data->lb = sb(data->lb, data);
			if (data->lb->next->num < data->lb->next->next->num
				&& data->lb->next->next->num > data->lb->next->next->next->num)
				data->lb = sb(data->lb, data);
		}
	}
	else
		if (data->lb->next->num < data->lb->next->next->num)
			data->lb = sb(data->lb, data);
}

void	ft_make_best_place_alg100(t_struct *data, t_list_b *lb, int chunk)
{
	int			nb;
	int			i;

	i = 0;
	nb = data->lb->next->num;
	while (lb)
	{
		if (nb < lb->num)
			nb = lb->num;
		lb = lb->next;
		i++;
	}
	ft_bp_alg100help(chunk, i, data, nb);
}

void	ft_bp_alg100help(int chunk, int i, t_struct *data, int nb)
{
	int len;
	int	nb2;

	nb2 = ft_chunk(data, chunk, -1);
	len = ft_len_listb(data);
	len = len / 2;
	if (i > len)
	{
		len = len * 2;
		while (len > 0)
		{
			if (data->lb->next->num == nb)
				return ;
			if (nb2 < 0)
				data = rrr(data);
			else
				data->lb = rrb(data);
			i++;
			nb2--;
		}
	}
	else
	{
		while (len > 0)
		{
			if (data->lb->next->num == nb)
				return ;
			if (nb2 > 0)
				data = rrr(data);
			else
				data->lb = rb(data);
			i++;
			nb2++;
		}
	}
}
