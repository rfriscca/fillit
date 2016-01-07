/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save_pieces.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfriscca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 14:25:45 by rfriscca          #+#    #+#             */
/*   Updated: 2016/01/07 14:27:09 by rfriscca         ###   ########.fr       */
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
			tab[k][22] = 0;
			++k;
			l = 0;
			++j;
		}
	}
	tab[k] = "end_of_tab";
}

char	**check_error(char *pieces)
{
	int		num_pieces;
	char	**tab;

	if ((num_pieces = count_pieces(pieces)) > 26)
		return (NULL);
	if (valid_piece(pieces, num_pieces) == 0)
		return (NULL);
	if ((tab = taballoc(num_pieces + 1, 22)) == NULL)
		return (NULL);
	return (tab);
}

char	**save_pieces(int fd)
{
	char	*pieces;
	char	**tab;
	char	c;
	int		i;

	i = 0;
	pieces = ft_strnew(1000);
	if (read(fd, &c, 1) == -1)
		return (NULL);
	while (c)
	{
		pieces[i] = c;
		++i;
		if (read(fd, &c, 1) == -1)
			return (NULL);
		if (i > 999)
			return (NULL);
	}
	if ((tab = check_error(pieces)) == NULL)
		return (NULL);
	create_tab(pieces, tab);
	free(pieces);
	return (tab);
}
