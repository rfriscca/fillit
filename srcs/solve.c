/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfriscca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/29 09:33:36 by rfriscca          #+#    #+#             */
/*   Updated: 2015/12/31 14:15:46 by rfriscca         ###   ########.fr       */
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

int		check_pieces(char **pieces, int l)
{
	int		k;

	k = 0;
	while (k < tab_len(pieces))
	{
		if (!ft_strcmp(pieces[l], "end_of_tab"))
			l = 0;
		if (pieces[l][22] == 0)
			return (l);
		++l;
		++k;
	}
	return (500);
}

int		fillit(char **pieces, char **square, int l)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (l == 500)
		return (1);
	while (ft_strcmp(square[i], "end_of_tab"))
	{
		while (square[i][j] != '\n')
		{
			if (square[i][j] == '.' && piece_fit(pieces[l], square, i, j))
			{
				put_piece(pieces[l], square, i, j);
				if (fillit(pieces, square, check_pieces(pieces, l + 1)) == 1)
					return (1);
				pieces[l][22] = 0;
				reset_piece(pieces[l], square);
			}
			++j;
		}
		j = 0;
		++i;
	}
	return (0);
}

char	**solve(char **pieces, int size)
{
	char	**square;

	square = create_square(size);
	if (fillit(pieces, square, 0))
		return (square);
	return (solve(pieces, size + 1));
}
