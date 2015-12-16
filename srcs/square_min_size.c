/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square_min_size.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfriscca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 15:07:59 by rfriscca          #+#    #+#             */
/*   Updated: 2015/12/09 13:06:57 by rfriscca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		square_min_size(char **tab)
{
	int		i;
	int		j;

	i = 0;
	j = 2;
	while (ft_strcmp(tab[i], "end_of_tab") != 0)
		i++;
	i = i * 4;
	while (j * j < i)
		++j;
	return (j);
}
