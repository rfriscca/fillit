/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfriscca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 14:01:51 by rfriscca          #+#    #+#             */
/*   Updated: 2015/12/18 16:32:32 by rfriscca         ###   ########.fr       */
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

char	**solve(char **pieces, int size)
{
	char	**square;

	square = create_square(size);
	if (check_square(pieces, square))
		return (square);
	return (solve(pieces, size + 1));
}
