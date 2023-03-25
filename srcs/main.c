/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:14:19 by tpotilli@st       #+#    #+#             */
/*   Updated: 2023/03/25 16:38:14 by tpotilli         ###   ########.fr       */
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
/*
pour faire le sa
int main(int argc, char **argv)
{
	(void)argc;
	int i;
	t_list_a *la;

	la = NULL;
	la = ft_first_la(la);
	i = 1;
	while (argv[i])
	{
		la = ft_addAt(la, ft_atoi(argv[i]), 1);
		i++;
	}
	ft_print_list(la);
	printf("\n");
	sa(la);
	ft_print_list(la);
	ft_free_list(la);
	return (0);
}
*/
//pour faire le sb
int main(int argc, char **argv)
{
	(void)argc;
	int i;
	t_list_b *la;

	la = NULL;
	la = ft_first_la(la);
	i = 1;
	while (argv[i])
	{
		la = ft_addAt(la, ft_atoi(argv[i]), 1);
		i++;
	}
	ft_print_list(la);
	printf("\n");
	sb(la);
	ft_print_list(la);
	ft_free_list(la);
	return (0);
}
