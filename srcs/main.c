/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfriscca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 16:47:11 by rfriscca          #+#    #+#             */
/*   Updated: 2015/12/18 15:07:41 by rfriscca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	int		fd;
	char	**pieces;
	char	**square;
	int		i;
	int		j;

	i = 0;
	j = 0;
	fd = open(argv[1], O_RDONLY);
	pieces = save_pieces(fd);
	if (pieces == NULL)
	{
		ft_putstr("error\n");
		return (0);
	}
	j = square_min_size(pieces);
	alpha_pieces(pieces);
	square = solve(pieces, j);
	while (ft_strcmp(square[i], "end_of_tab"))
	{
		printf("%s", square[i]);
		++i;
	}
}
