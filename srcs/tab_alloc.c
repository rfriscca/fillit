/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_alloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfriscca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 15:26:42 by rfriscca          #+#    #+#             */
/*   Updated: 2015/12/09 12:07:33 by rfriscca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**taballoc(int l, int c)
{
	char	**tab;
	int		i;

	i = 0;
	tab = (char**)malloc(sizeof(tab) * l);
	while (i < l)
	{
		tab[i] = ft_strnew(c);
		i++;
	}
	return (tab);
}
