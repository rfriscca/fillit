/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_square.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfriscca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 15:54:19 by rfriscca          #+#    #+#             */
/*   Updated: 2015/12/07 16:04:47 by rfriscca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**create_square(int size)
{
	char	**tab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	tab = taballoc(size, size + 1);
	while (tab[i])
	{
		while (tab[i][j])
		{
			tab[i][j] = '.';
			if (j == size)
				tab[i][j] = '\n';
			j++;
		}
		j = 0;
		i++;
	}
	return (tab);
}
