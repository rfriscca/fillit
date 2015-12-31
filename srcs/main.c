/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfriscca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 16:47:11 by rfriscca          #+#    #+#             */
/*   Updated: 2015/12/31 14:39:50 by rfriscca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	int		fd;
	char	**pieces;
	char	**square;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (argc != 2 || (fd = open(argv[1], O_RDONLY)) == -1 ||
			(pieces = save_pieces(fd)) == NULL)
	{
		ft_putstr("error\n");
		return (0);
	}
	j = square_min_size(pieces);
	alpha_pieces(pieces);
	square = solve(pieces, j);
	while (ft_strcmp(square[i], "end_of_tab"))
	{
		ft_putstr(square[i]);
		++i;
	}
	return (0);
}
