/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfriscca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 14:01:51 by rfriscca          #+#    #+#             */
/*   Updated: 2015/12/18 14:53:50 by rfriscca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (ft_strcmp(square[i], "end_of_tab"))
	{
		while (square[i][j] != '\n')
		{
			if (piece_fit(pieces[k], square, i, j))
			{
				put_piece(pieces[k], square, i, j);
				++k;
			}
			++j;
		}
		j = 0;
		++i;
	}
	if (k == tab_len(pieces))
		return (1);
	return (0);
}

char	**solve(char **pieces, int size)
{
	char	**square;

	square = create_square(size);
	if (check_square(pieces, square))
		return (square);
	return (NULL);
}
