/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reset_piece.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfriscca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 15:49:27 by rfriscca          #+#    #+#             */
/*   Updated: 2015/12/31 14:15:27 by rfriscca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	reset_piece(char *piece, char **square)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (!ft_isalpha(*piece))
		++piece;
	while (k < 4)
	{
		while (square[i][j] != '\n')
		{
			if (square[i][j] == *piece)
			{
				square[i][j] = '.';
				++k;
			}
			++j;
		}
		j = 0;
		++i;
	}
}
