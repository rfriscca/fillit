/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfriscca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 16:47:11 by rfriscca          #+#    #+#             */
/*   Updated: 2015/12/08 14:28:43 by rfriscca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#define bufsize 32

int		main(int argc, char **argv)
{
	int		fd;
	char	**pieces;

	fd = open(argv[1], O_RDONLY);
	pieces = save_pieces(fd);
	/*if (valid_piece() == 0)
	{
		ft_putstr("error\n");
		return (0);
	}*/
}
