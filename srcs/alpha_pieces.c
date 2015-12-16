/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_pieces.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfriscca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 13:48:57 by rfriscca          #+#    #+#             */
/*   Updated: 2015/12/16 14:00:12 by rfriscca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	alpha_pieces(char **tab)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (ft_strcmp(tab[i], "end_of_tab"))
	{
		while (tab[i][j])
		{
			if (tab[i][j] == '#')
				tab[i][j] = 'A' + i;
			++j;
		}
		j = 0;
		++i;
	}
}
