/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:47:19 by tpotilli          #+#    #+#             */
/*   Updated: 2023/03/19 18:49:15 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H


// =======================================================================
//								Includes
// =======================================================================

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <limits.h>
#include <string.h>

// =======================================================================
//								Colors
// =======================================================================

# define BLACK "\001\033[1;30m\002"
# define RED "\001\033[1;31m\002"
# define GREEN "\001\033[1;32m\002"
# define YELLOW "\001\033[1;33m\002"
# define BLUE "\001\033[1;34m\002"
# define PURPLE "\001\033[1;35m\002"
# define CYAN "\001\033[1;36m\002"
# define WHITE "\001\033[1;37m\002"
# define RESET "\001\033[0m\002"

// =======================================================================
//								list
// =======================================================================
/*
typedef struct s_List
{
	int data;
	struct Cell_t *next;
}List, Cell;
*/
typedef struct s_pile
{
	struct s_pile *pile_a;
	struct s_pile *pile_b;
	int data;
	struct s_pile *next;
}	List, t_pile;

// =======================================================================
//								Function List
// =======================================================================

List *ft_emptyList();
List *ft_isEmptyList(List *);
void ft_printList(List *);
List *ft_AddCell(List *);
List *ft_Addnumber(List *, int, int);
List *ft_freeList(List *);

// =======================================================================
//								Libft
// =======================================================================

int	ft_isdigit(int c);
int	ft_strlen(char *s);
int	ft_atoi(char *nptr);
long	ft_atol(char *nptr);
void	ft_putstr_fd(char *s, int fd);


// =======================================================================
//								Parsing 
// =======================================================================

List *ft_emptyList();
List *ft_isEmptyList(List *s);
List *ft_addCell(List *s);
List *freeList(List *s);
void ft_printList(List *s);
List *ft_Addnumber(List *s, int data, int pos);
int ft_len_list(List *s);
int ft_getAt(t_pile *s, int pos);

// =======================================================================
//								Parsing 
// =======================================================================

bool ft_verif_input(char **argv);
bool ft_verif_existing(int argc);
bool ft_verif_duplicate(char **argv);
bool ft_verif_int(char *argv);
int ft_parsing_manager(int argc, char **argv);

// =======================================================================
//								actions
// =======================================================================

void sa(t_pile *list_a);
void sb(t_pile *list_b);
void ss(t_pile *s, t_pile *list_a, t_pile *list_b);
void pa(t_pile *s, t_pile *list_a, t_pile *list_b);










void push_swap(List *);
void ft_error();

#endif