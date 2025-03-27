/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 17:16:25 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/15 17:25:49 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 * Retourne 1 si il y deux fois le meme element dans le tableau, renvoi 0 si
 * tous les elements sont differents.
 */
int	el_in_tab(int *row)
{
	int	cur;
	int	cur2;

	cur = 0;
	while (cur < 4)
	{
		cur2 = 0;
		while (cur2 < 4)
		{
			if (row[cur] == row[cur2] && cur != cur2)
				return (1);
			cur2++;
		}
		cur++;
	}
	return (0);
}

/*
 * Rempli le tableau checktab avec les lignes des permutations specifiees par
 * linesnum.
 */
void	lines_to_array(int checktab[4][4], int permut[24][4], int linesnum[4])
{
	int	cur;
	int	cur2;

	cur = 0;
	cur2 = 0;
	while (cur < 4)
	{
		cur2 = 0;
		while (cur2 < 4)
		{
			checktab[cur][cur2] = permut[linesnum[cur]][cur2];
			cur2++;
		}
		cur++;
	}
}

/*
 * Prend un tableau a deux dimensions de 4*4 et l'affiche
 */
void	print_solution(int tab[4][4])
{
	int		cur;
	int		cur2;
	char	c;

	cur = 0;
	while (cur < 4)
	{
		cur2 = 0;
		while (cur2 < 4)
		{
			c = tab[cur][cur2] + '0';
			write(1, &c, 1);
			if (cur2 != 3)
				write(1, " ", 1);
			cur2++;
		}
		write(1, "\n", 1);
		cur++;
	}
}

/*
 * Fonctions qui inverse les elements du tableau passe en parametres
 */
void	ft_rev_int_tab(int *tab, int size)
{
	int	cur;
	int	t;

	cur = 0;
	while (cur < size / 2)
	{
		t = tab[cur];
		tab[cur] = tab[size - 1 - cur];
		tab[size - 1 - cur] = t;
		cur++;
	}
}

/*
 * Rempli un tableau de 4 elements avec les elements de la colonne
 * numero "col_num"
 */
void	get_cols(int col_tab[4], int tab[4][4], int col_num)
{
	col_tab[0] = tab[0][col_num];
	col_tab[1] = tab[1][col_num];
	col_tab[2] = tab[2][col_num];
	col_tab[3] = tab[3][col_num];
}
