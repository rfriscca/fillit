/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfriscca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 14:01:51 by rfriscca          #+#    #+#             */
/*   Updated: 2015/12/28 15:02:16 by rfriscca         ###   ########.fr       */
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
				j = 0;
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

	save = ft_strnew(22);
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

int		main(void)
{
	int		i;
	int		j;
	char    pieces[8][22] = {{ "...A\n...A\n...A\n...A\n\0"},{"....\n....\n....\nBBBB\n\0"},
        {".CCC\n...C\n....\n....\n\0"},{"....\n.DD.\n.DD.\n....\n\0"},
        {"....\n.EE.\n.EE.\n....\n\0"},{"....\n....\nFF..\n.FF.\n\0"},
        {"GG..\n.G..\n.G..\n....\n\0"},{"....\nHHH.\n.H..\n....\n\0"}};
	char	**piece;
	char	**square;

	piece = (char **)malloc(sizeof(*pieces) * 9);
	i = 0;
	j = 0;
	while (i < 9)
	{
		piece[i] = ft_strnew(22);
		while (j < 21)
		{
			piece[i][j] = pieces[i][j];
			++j;
		}
		piece[i][22] = 0;
		j = 0;
		++i;
	}
	piece[i] = "end_of_tab";
	i = 0;
	square = solve(piece, 5);
	while (ft_strcmp(square[i], "end_of_tab"))
	{
		ft_putstr(square[i]);
		++i;
	}
	return (0);
}
