/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_10helper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: landeo <landeo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 19:12:18 by tpotilli          #+#    #+#             */
/*   Updated: 2023/06/19 13:22:05 by landeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	ft_10_action(t_list_a *tmp, t_struct *data)
{
	int	len;
	int	pos;
	int	num;

	pos = ft_found_pos_little(data);
	num = ft_found_little(data);
	len = ft_len_lista(data);
	len = len / 2;
	if (pos < len)
	{
		while (tmp)
		{
			if (tmp->num == num)
				break ;
			data->la = ra(data);
			tmp = data->la->next;
		}
		data->la = pb(data);
	}
	else
		ft_10_action_helper(tmp, data, num);
}

void	ft_10_action_helper(t_list_a *tmp, t_struct *data, int num)
{
	{
		while (tmp)
		{
			if (tmp->num == num)
				break ;
			data->la = rra(data);
			tmp = data->la->next;
		}
		data->la = pb(data);
	}
}

bool	ft_checker_valid(t_struct *data)
{
	t_list_a *la;

	la = data->la->next;
	while (la->next)
	{
		if (la->num > la->next->num)
			return (1);
		la = la->next;
	}
	return (0);
}