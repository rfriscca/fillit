/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfriscca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 14:01:51 by rfriscca          #+#    #+#             */
/*   Updated: 2015/12/22 17:44:46 by rfriscca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		tab_len(char **tab)
{
	int		i;

	i = 0;
	while (ft_strcmp(tab[i], "end_of_tab"))
		++i;
	return (i);
}

int		check_square(char **pieces, char **square)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (ft_strcmp(square[i], "end_of_tab"))
	{
		while (square[i][j] != '\n')
		{
			if (square[i][j] == '.' && piece_fit(*pieces, square, i, j))
			{
				put_piece(*pieces, square, i, j);
				pieces++;
				i = 0;
				j = -1;
			}
			++j;
		}
		j = 0;
		++i;
	}
	if (!ft_strcmp(*pieces, "end_of_tab"))
		return (1);
	return (0);
}

char	**swap_pieces(char **pieces, int l, int where)
{
	char	*save;

	save = ft_strnew(21);
	save = ft_strcpy(save, pieces[l]);
	pieces[l] = ft_strcpy(pieces[l], pieces[where]);
	pieces[where] = ft_strcpy(pieces[where], save);
	free(save);
	return (pieces);
}

char	**solve(char **pieces, int size)
{
	char	**square;
	int		i;
	int		flag;

	i = tab_len(pieces) - 1;
	flag = 0;
	square = create_square(size);
	while (i < tab_len(pieces))
	{
		if (!flag)
		{
			--i;
			pieces = swap_pieces(pieces, i, tab_len(pieces) - 1);
		}
		if (flag)
		{
			++i;
			pieces = swap_pieces(pieces, i, 0);
		}
		if (check_square(pieces, square))
			return (square);
		if (i == 0)
			flag = 1;
		if (i == tab_len(pieces) - 1)
			++i;
		reset_square(square);
	}
	return (solve(pieces, size + 1));
}
