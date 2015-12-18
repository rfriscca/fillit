/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_piece.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfriscca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 14:07:02 by rfriscca          #+#    #+#             */
/*   Updated: 2015/12/18 14:33:18 by rfriscca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	put_piece(char *piece, char **square, int j, int k)
{
	int		i;

	i = 0;
	while (!ft_isalpha(*piece))
	{
		++piece;
	}
	i = k - (i % 5);
	while (*piece)
	{
		if (ft_isalpha(*piece) && square[j][k] == '.')
			square[j][k] = *piece;
		++k;
		++piece;
		if (*piece == '\n')
		{
			++j;
			k = i;
		}
	}
}
