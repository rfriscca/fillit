/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfriscca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 14:01:51 by rfriscca          #+#    #+#             */
/*   Updated: 2015/12/17 17:09:55 by rfriscca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		piece_fit(char *piece, char **square, int j, int k)
{
	int		i;

	i = k;
	while (!ft_isalpha(*piece))
		++piece;
	while (*piece)
	{
		if (ft_isalpha(*piece) && square[j][k] != '.')
			return (0);
		++k;
		++piece;
		if (*piece == '\n')
		{
			++j;
			k = i;
		}
	}
	return (1);
}

void	put_piece(char *piece, char **square, int j, int k)
{
	int		i;

	i = k;
	while (!ft_isalpha(*piece))
		++piece;
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

char	**solve(char **pieces, int size)
{
	char	**square;

	square = create_square(size);

}
