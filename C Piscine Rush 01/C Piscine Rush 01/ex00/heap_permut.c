/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heap_permut.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilair <pvilair@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 11:10:14 by ocartier          #+#    #+#             */
/*   Updated: 2021/08/15 17:30:27 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/*
 * L'algorithme de Heap génère l'ensemble des permutations d'un ensemble
 * de n objets. Il a été proposé pour la première fois par B. R. Heap en 19631.
 * Source : Wikipedia
 */

int	g_permut[24][4];
int	g_cur;

/*
 * Met x dans y et y dans x
 */
void	swap(int *x, int *y)
{
	int	temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

/*
 * Ajout la combinaison "v" a la liste de combinaisons "g_permut"
 */
void	add_permut(const int *v)
{
	g_permut[g_cur][0] = v[0];
	g_permut[g_cur][1] = v[1];
	g_permut[g_cur][2] = v[2];
	g_permut[g_cur][3] = v[3];
	g_cur = g_cur + 1;
}

/*
 * Implementation recursive de l'algorithme de Heap
 */
void	heappermute(int c[], int n)
{
	int	i;

	if (n == 1)
		add_permut(c);
	else
	{
		i = 0;
		while (i < n)
		{
			heappermute (c, n - 1);
			if (n % 2 == 1)
				swap(&c[0], &c[n - 1]);
			else
				swap(&c[i], &c[n - 1]);
			i++;
		}
	}
}

/*
 * Copie chaque elements de "told" dans tnew
 */
void	copy_array(int told[24][4], int tnew[24][4])
{
	int	cur1;
	int	cur2;

	cur1 = 0;
	while (cur1 < 24)
	{
		cur2 = 0;
		while (cur2 < 4)
		{
			tnew[cur1][cur2] = told[cur1][cur2];
			cur2++;
		}
		cur1++;
	}
}

/*
 * Genere les permutations et les copies dans le tableau "permut"
 * passe en parametres
 */
void	get_permut(int permut[24][4])
{
	int	el[4];

	el[0] = 1;
	el[1] = 2;
	el[2] = 3;
	el[3] = 4;
	g_cur = 0;
	heappermute(el, 4);
	copy_array(g_permut, permut);
}
