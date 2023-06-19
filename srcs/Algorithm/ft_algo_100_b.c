/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_100_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: landeo <landeo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 15:29:41 by tpotilli          #+#    #+#             */
/*   Updated: 2023/06/19 17:32:29 by landeo           ###   ########.fr       */
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

int	ft_better_la(t_struct *data, int chunk, t_list_a *la)
{
	int			littlech1;
	int			littlech2;
	int			compare;
	int			little;

	littlech1 = ft_found_pos_little_first_part(data, chunk, data->la);
	littlech2 = ft_found_pos_little_last_part(data, chunk, data->la);
	if (littlech1 >= littlech2)
		compare = 0;
	else
		compare = 1;
	if (compare == 1)
	{
		little = ft_found_little_100_75(data, littlech2, la);
		little = little * -1;
	}
	else if (compare == 0)
		little = ft_found_little_100_25(data, littlech1, chunk);
	return (little);
}

int	ft_take_best_place100(t_struct *data, int cpt, int chunk)
{
	int			len;
	int			nb;
	t_list_a	*la;

	la = data->la->next;
	nb = ft_better_la(data, chunk, la);
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
	else 
		ft_best_place_helper(cpt, len, data, nb);
	return (0);
}

void	ft_best_place_helper(int cpt, int len, t_struct *data, int nb)
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
			if (nb > 0)
				data = rr(data);
			else
				data->lb = rb(data);
			cpt--;
			nb--;
		}
	}
}

void	ft_take_best_place102(t_struct *data, int nb, int chunk)
{
	int			len;
	t_list_b	*lb;
	int			i;
	int			len2;
	int			nb2;

	nb2 = ft_better_la(data, chunk, data->la);
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
		ft_best_place_102_helper(i, len, data, nb2);
}

void	ft_best_place_102_helper(int i, int len, t_struct *data, int nb)
{
	if (i == len)
	{
		len = ft_len_listb(data);
		while (i > 0)
		{
			if (nb > 0)
				data = rr(data);
			else
				data->lb = rb(data);
			i--;
			nb--;
		}
	}
	else if (i > len)
	{
		len = ft_len_listb(data);
		while (i++ < len || i == len)
		{
			if (nb < 0)
				data = rrr(data);
			else
				data->lb = rrb(data);
			nb++;
		}
	}
	else if (i < len)
	{
		while (i++ < len)
		{
			if (nb > 0)
				data = rr(data);
			else
				data->lb = rb(data);
			nb--;
		}
	}
}
