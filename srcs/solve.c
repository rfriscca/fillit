/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfriscca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 14:01:51 by rfriscca          #+#    #+#             */
/*   Updated: 2015/12/16 17:19:12 by rfriscca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		piece_fit(char *piece, char **square)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
}

void	put_piece(char *piece, char **square)
{
	int		j;
	int		k;

	j = 0;
	k = 0;
	while (ft_strcmp(square[j], "end_of_tab"))
	{
		while (square[j][k])
		{
			if (square[j][k] == '.')
		}
	}
}

char	**solve(char **pieces, int size)
{
	char	**square;

	square = create_square(size);
}
