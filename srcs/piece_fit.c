/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   piece_fit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfriscca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 14:09:22 by rfriscca          #+#    #+#             */
/*   Updated: 2015/12/18 14:31:34 by rfriscca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		piece_fit(char *piece, char **square, int j, int k)
{
	int		i;

	i = 0;
	while (!ft_isalpha(*piece))
	{
		++piece;
		++i;
	}
	i = k - (i % 5);
	while (*piece)
	{
		if (ft_isalpha(*piece) && k >= 0 && square[j][k] != '.')
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