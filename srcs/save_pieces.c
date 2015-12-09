/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save_pieces.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfriscca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 14:25:45 by rfriscca          #+#    #+#             */
/*   Updated: 2015/12/09 12:32:57 by rfriscca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		count_pieces(char *pieces)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (pieces[i])
	{
		if (pieces[i] == '\n')
			++j;
		++i;
	}
	++j;
	return (j / 5);
}

void	create_tab(char *pieces, char **tab)
{
	int		j;
	int		k;
	int		l;

	j = 0;
	k = 0;
	l = 0;
	while (pieces[j])
	{
		tab[k][l] = pieces[j];
		++j;
		++l;
		if (l == 20)
		{
			++k;
			l = 0;
			++j;
		}
	}
}

char	**save_pieces(int fd)
{
	char	*pieces;
	char	**tab;
	char	c;
	int		i;
	int		num_pieces;

	i = 0;
	pieces = ft_strnew(500);
	while (read(fd, &c, 1))
	{
		pieces[i] = c;
		++i;
	}
	num_pieces = count_pieces(pieces);
	if (valid_piece(pieces, num_pieces) == 0)
		return (NULL);
	tab = taballoc(num_pieces, 20);
	create_tab(pieces, tab);
	free(pieces);
	return (tab);
}
