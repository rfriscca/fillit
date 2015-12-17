/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfriscca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 16:47:11 by rfriscca          #+#    #+#             */
/*   Updated: 2015/12/16 14:19:49 by rfriscca         ###   ########.fr       */
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
	printf("%d\n", j);
	alpha_pieces(pieces);
	while (ft_strcmp(pieces[i], "end_of_tab"))
	{
		printf("%s", pieces[i]);
		++i;
	}
}