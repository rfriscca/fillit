/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square_min_size.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfriscca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 15:07:59 by rfriscca          #+#    #+#             */
/*   Updated: 2015/12/08 12:43:01 by rfriscca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		square_min_size(char **tab)
{
	int		i;

	i = 0;
	while (tab[i])
		i++;
	return (i * 4);
}