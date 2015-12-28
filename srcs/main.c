/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfriscca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 16:47:11 by rfriscca          #+#    #+#             */
/*   Updated: 2015/12/28 14:21:32 by rfriscca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


int		main(int argc, char **argv)
{
	char	pieces[8][22] = {{ "...#\n...#\n...#\n...#\n\0\\0"},{"....\n....\n....\n####\n\0\\0"},
		{".###\n...#\n....\n....\n\0\\0"},{"....\n..##\n.##.\n....\n\0\\0"},
		{"....\n.##.\n.##.\n....\n\0\\0"},{"....\n....\n##..\n.##.\n\0\\0"},
		{"##..\n.#..\n.#..\n....\n\0\\0"},{"....\n###.\n.#..\n....\n\0\\0"}};
	char	**square;
	int		i;

	i = 0;
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
