/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save_pieces.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfriscca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 14:25:45 by rfriscca          #+#    #+#             */
/*   Updated: 2015/12/08 15:02:06 by rfriscca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		count_pieces(char *pieces)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (pieces[i])
	{
		if (pieces[i] == '\n')
			j++;
		i++;
	}
	j++;
	return (j/5);
}

char	**save_pieces(int fd)
{
	char	*pieces;
	char	c;
	int		i;

	i = 0;
	while (read(fd, &c, 1))
	{
		pieces[i] = c;
		++i;
	}
}
