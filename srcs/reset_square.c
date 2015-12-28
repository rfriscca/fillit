/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reset_square.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfriscca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 13:59:12 by rfriscca          #+#    #+#             */
/*   Updated: 2015/12/28 15:04:51 by rfriscca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	reset_square(char **square)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (!ft_strcmp(square[i], "end_of_tab"))
	{
		while (square[i][j] != '\n')
		{
			square[i][j] = '.';
			++j;
		}
		j = 0;
		++i;
	}
}
