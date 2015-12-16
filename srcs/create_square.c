/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_square.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfriscca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 15:54:19 by rfriscca          #+#    #+#             */
/*   Updated: 2015/12/16 13:55:22 by rfriscca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**create_square(int size)
{
	char	**tab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if ((tab = taballoc(size, size + 1)) == NULL)
		return (NULL);
	while (i < size)
	{
		while (j < size + 1)
		{
			tab[i][j] = '.';
			if (j == size)
				tab[i][j] = '\n';
			j++;
		}
		j = 0;
		i++;
	}
	return (tab);
}
