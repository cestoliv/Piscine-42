/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 14:26:25 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/25 21:56:32 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data);
void	ft_list_push_front(t_list **begin_list, void *data);
int		ft_list_size(t_list *begin_list);
t_list	*ft_list_last(t_list *begin_list);
void    ft_list_push_back(t_list **begin_list, void *data);
t_list	*ft_list_push_strs(int size, char **strs);
void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *));
t_list  *ft_list_at(t_list *begin_list, unsigned int nbr);
void	ft_list_reverse(t_list **begin_with);
void	ft_list_foreach(t_list *begin_list, void(*f)(void *));
void    ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void
		*data_ref, int (*cmp)());
t_list  *ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)());
void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *));
void	ft_list_merge(t_list **begin_list, t_list *begin_list2);
void    ft_list_sort(t_list **begin_list, int(*cmp)());
//void    ft_list_reverse_fun(t_list *begin_list);

void	ft_print_list(t_list *li)
{
	if (!li)
		{
			printf("La liste est vide, rien a afficher\n");
			return ;
		}
	while (li)
	{
		printf("%s\n", li->data);
		li = li->next;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	free_fct(void *data)
{
	(void)data;
	// tkt je fait pas rien hein
}

void	print_str(void *data)
{
	printf("%s, ", data);
}

// gcc ex00/ft_create_elem.c ex01/ft_list_push_front.c ex02/ft_list_size.c ex03/ft_list_last.c ex04/ft_list_push_back.c ex05/ft_list_push_strs.c ex06/ft_list_clear.c ex07/ft_list_at.c ex08/ft_list_reverse.c ex09/ft_list_foreach.c ex10/ft_list_foreach_if.c ex11/ft_list_find.c ex12/ft_list_remove_if.c ex13/ft_list_merge.c ex14/ft_list_sort.c main.c
int	main(int ac, char **av)
{
	t_list *mylist;
	t_list *mylist2;
	int (*ptr)(char *, char *);

	ptr = &ft_strcmp;

	mylist = ft_create_elem("front");
	mylist2 = ft_create_elem("ligne");
	ft_list_push_front(&mylist, "front1");
	ft_list_push_front(&mylist2, "ligne2");
	ft_list_push_front(&mylist, "front2");
	ft_list_push_front(&mylist, "front3");
	ft_list_push_front(&mylist, "front4");
	ft_list_push_front(&mylist, "front5");
	ft_list_push_front(&mylist, "front6");
	ft_list_push_front(&mylist, "front9");
	ft_list_push_front(&mylist, "front8");
	ft_list_push_back(&mylist, "front-1");
	
	printf("mylist :\n");
	ft_print_list(mylist);
	printf("\n");
	
	printf("SIZE : %d\n", ft_list_size(mylist));
	printf("LAST : %s\n", ft_list_last(mylist)->data);
	printf("\nTEST PUSH STRS.\n");
	t_list *push_strs = ft_list_push_strs(ac, av);
	ft_print_list(push_strs);
	printf("\nTEST CLEAR (je la rerempli avec les meme valeurs ensuite)\n");
	ft_list_clear(push_strs, &free_fct);
	push_strs = ft_list_push_strs(ac, av);
	ft_print_list(push_strs);
	t_list *n_ieme = ft_list_at(mylist, 5);
	if (n_ieme != NULL)
		printf("\n5eme element (front3) : %s\n", n_ieme->data);
	else
		printf("\nn-ieme element : t'en demande trop");
	printf("\nREVERSE.\n");
	ft_list_reverse(&mylist);
	ft_print_list(mylist);

	printf("\nFOREACH (print chaque data)\n");
	ft_list_foreach(mylist, &print_str);

	printf("\n\nFOREACH IF (print chaque data egale a front3)\n");
	ft_list_foreach_if(mylist, &print_str, "front3", &ft_strcmp);

	printf("\n\nFIND (print la valeur du premier element qui a front6 pour valeur, donc front6)\n");
	printf("%s\n", ft_list_find(mylist, "front6", &ft_strcmp)->data);
	
	printf("\nREMOVE (supprime l'element front4 de la chaine)\n");
	ft_list_remove_if(&mylist, "front4", &ft_strcmp, &free_fct);
	ft_print_list(mylist);

	printf("\nMERGE (merge mylist2 et push_strs)\n");
	ft_list_merge(&mylist2, push_strs);
	ft_print_list(mylist2);

	printf("\nSORT (sort push_strs)\n");
	ft_list_sort(&push_strs, &ft_strcmp);
	ft_print_list(push_strs);	
/*	
	printf("\nREVERSE FUN (de push_strs)\n");
	ft_list_reverse_fun(push_strs);
*/
/*	while (push_strs)
	{
		printf("-%s\n", push_strs->data);
		push_strs = push_strs->next;
	}
	ft_print_list(push_strs);
	*/

	//printf("\nSORTED LIST INSERT (ajoute front7)\n");
	
	return (0);
}
