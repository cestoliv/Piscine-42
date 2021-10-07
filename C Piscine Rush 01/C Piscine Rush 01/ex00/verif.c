/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azanane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 15:51:52 by azanane           #+#    #+#             */
/*   Updated: 2021/08/15 17:40:51 by ocartier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// functions.c
void	ft_rev_int_tab(int *tab, int size);
int		el_in_tab(int *row);
void	get_cols(int col_tab[4], int tab[4][4], int col_num);

/*
 * Verifie que la ligne passee contienne le bon nombre de boites visibles,
 * "val" est la valeurs donnes par la consigne
 * Row peut representer soit une ligne soit un colonne
 */
int	check(int *row, int val)
{
	int	stock;
	int	cur;
	int	num;

	cur = 1;
	stock = row[0];
	num = 1;
	while (num < 4)
	{
		if (row[num] > stock)
		{
			cur++;
			stock = row[num];
		}
		num++;
	}
	if (cur == val && el_in_tab(row) == 0)
		return (1);
	else
		return (0);
}

/*
 * Inverse la ligne/colonne passe, la fait passe par check et
 * la remet dans le bon sens.
 * Permet d'utiliser la meme fonction check pour verifier les deux sens
 * d'une ligne / colonne
 */
int	check_reverse(int *row, int val)
{
	int	ret;

	ft_rev_int_tab(row, 4);
	ret = check(row, val);
	ft_rev_int_tab(row, 4);
	return (ret);
}

/*
 * Appelle les fonction check puis check_reverse sur chaue ligne
 * val[n] est la valeur passes par l'utilisateur pour cette ligne
 */
int	verif_rows(int tab[4][4], int *val)
{
	if (check(tab[0], val[8]) == 0 || check_reverse(tab[0], val[12]) == 0)
		return (0);
	if (check(tab[1], val[9]) == 0 || check_reverse(tab[1], val[13]) == 0)
		return (0);
	if (check(tab[2], val[10]) == 0 || check_reverse(tab[2], val[14]) == 0)
		return (0);
	if (check(tab[3], val[11]) == 0 || check_reverse(tab[3], val[15]) == 0)
		return (0);
	return (1);
}

/*
 * Appelle les fonction check puis check_reverse sur chaque colonne
 * val[n] est la valeur passes par l'utilisateur pour cette colonne
 * On utilise get_cols pour mettre dans test_tab toutes les valeurs
 * de la colonne.
 */
int	verif_cols(int tab[4][4], int *val)
{
	int	test_tab[4];

	get_cols(test_tab, tab, 0);
	if (check(test_tab, val[0]) == 0 || check_reverse(test_tab, val[4]) == 0)
		return (0);
	get_cols(test_tab, tab, 1);
	if (check(test_tab, val[1]) == 0 || check_reverse(test_tab, val[5]) == 0)
		return (0);
	get_cols(test_tab, tab, 2);
	if (check(test_tab, val[2]) == 0 || check_reverse(test_tab, val[6]) == 0)
		return (0);
	get_cols(test_tab, tab, 3);
	if (check(test_tab, val[3]) == 0 || check_reverse(test_tab, val[7]) == 0)
		return (0);
	return (1);
}

/*
 * Fonction principale qui apelle la fonction de verifs de lignes
 * puis des colonnes
 */
int	verif(int tab[4][4], int *val)
{
	if (verif_rows(tab, val) == 0 || verif_cols(tab, val) == 0)
		return (0);
	return (1);
}
