/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:14:19 by tpotilli@st       #+#    #+#             */
/*   Updated: 2023/03/23 16:12:28 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
int main(int argc, char **argv)
{
	(void)argc;
	if (ft_verif_input(argv) == 0)
	{
		write(2, RED, ft_strlen(RED));
		write(2, "Please use only numbers !\n", 27);
		write(2, RESET, ft_strlen(RESET));
	}
}

int main(int argc, char **argv)
{
	(void)argv;
	if (ft_verif_existing(argc) == 0)
	{
		write(2, RED, ft_strlen(RED));
		write(2, "Please enter at least 2 numbers\n", 33);
		write(2, RESET, ft_strlen(RESET));
	}
}

int main(int argc, char **argv)
{
	(void)argv;
	if (ft_verif_existing(argc) == 0)
	{
		write(2, RED, ft_strlen(RED));
		write(2, "Please enter at least 2 numbers\n", 33);
		write(2, RESET, ft_strlen(RESET));
	}
}

int main(int argc, char **argv)
{
	(void)argc;
	if (ft_verif_duplicate(argv) == 0)
	{
		write(2, RED, ft_strlen(RED));
		write(2, "Please don't put 2 times the same number\n", 42);
		write(2, RESET, ft_strlen(RESET));
	}
}
*/
/*
int main(int argc, char **argv)
{
	ft_parsing_manager(argc, argv);
	return (0);
}
*/
/*
int main() 
{
    t_pile *list_a = malloc(sizeof(t_pile));
    list_a->data = 2;
    list_a->next = malloc(sizeof(t_pile));
    list_a->next->data = 1;
    list_a->next->next = NULL;

    printf("Before:\n");
    ft_printList(list_a);

    sa(list_a);

    printf("After:\n");
    ft_printList(list_a);

    return 0;
}
*/

int main(int argc, char **argv)
{
	/*
	printf("%d",ft_atoi(argv[i]));*/
	
	List *pile_a;
	
	pile_a = ft_emptyList();
	pile_a = ft_transform_arg(argc, argv, pile_a);
	ft_printList(pile_a);
	return (0);
}
