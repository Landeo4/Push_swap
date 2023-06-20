/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_100_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 15:29:41 by tpotilli          #+#    #+#             */
/*   Updated: 2023/06/20 18:49:01 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_found_best_place100(t_struct *data, t_list_b *lb)
{
	int			nb;
	int			cpt;

	nb = data->la->next->num;
	cpt = 1;
	lb = data->lb->next;
	while (lb && lb->next)
	{
		if (lb->num > nb && nb > lb->next->num)
			return (cpt);
		cpt++;
		lb = lb->next;
	}
	return (-1);
}

int	ft_take_best_place100(t_struct *data, int cpt, int chunk)
{
	int			len;
	int			nb;

	nb = ft_reduce_managera(data, chunk);
	len = ft_len_listb(data);
	len = len / 2;
	if (cpt == len)
	{
		while (len > 0)
		{
			if (nb > 0)
				data = rr(data);
			else
				data->lb = rb(data);
			len--;
			nb--;
		}
		return (0);
	}
	if (nb > 0)
		ft_best_place_helper1(cpt, len, data, nb);
	else if (nb < 0)
		ft_best_place_helper0(cpt, len, data, nb);
	return (0);
}

void	ft_best_place_helper1(int cpt, int len, t_struct *data, int nb)
{
	if (cpt > len)
	{
		len = ft_len_listb(data);
		while (len > cpt)
		{
			if (nb > 0)
				data = rrr(data);
			else
				data->lb = rrb(data);
			cpt++;
			nb--;
		}
	}
	else if (cpt < len)
	{
		while (cpt > 0)
		{
			if (nb > 0)
				data = rr(data);
			else
				data->lb = rb(data);
			cpt--;
			nb--;
		}
	}
}


void	ft_best_place_helper0(int cpt, int len, t_struct *data, int nb)
{
	if (cpt > len)
	{
		len = ft_len_listb(data);
		while (len > cpt)
		{
			if (nb < 0)
				data = rrr(data);
			else
				data->lb = rrb(data);
			cpt++;
			nb++;
		}
	}
	else if (cpt < len)
	{
		while (cpt > 0)
		{
			if (nb < 0)
				data = rr(data);
			else
				data->lb = rb(data);
			cpt--;
			nb++;
		}
	}
}


void	ft_take_best_place102(t_struct *data, int nb)
{
	int			len;
	t_list_b	*lb;
	int			i;
	int			len2;

	i = 1;
	lb = data->lb->next;
	len2 = ft_len_listb(data);
	len = ft_len_listb(data);
	len = len / 2;
	if (len * 2 != len2)
		len++;
	while (lb->num != nb)
	{
		i++;
		lb = lb->next;
	}
	lb = data->lb->next;
	if (i == 0)
		data->lb = rb(data);
	else
		ft_best_place_102_helper(i, len, data);
}

void	ft_best_place_102_helper(int i, int len, t_struct *data)
{
	if (i == len)
	{
		len = ft_len_listb(data);
		while (i > 0)
		{
			data->lb = rb(data);
			i--;
		}
	}
	else if (i > len)
	{
		len = ft_len_listb(data);
		if (i == len)
		{
			data->lb = rrb(data);
			return ;
		}
		while (i++ < len)
			data->lb = rrb(data);
		data->lb = rrb(data);
	}
	else if (i < len)
	{
		while (i++ < len)
			data->lb = rb(data);
		data->lb = rb(data);
	}
}
