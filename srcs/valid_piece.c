/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_piece.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfriscca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 13:09:31 by rfriscca          #+#    #+#             */
/*   Updated: 2016/01/06 15:03:16 by rfriscca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		valid(char *str, int j, int i, int x)
{
	if (str[i + 1] == '#' || str[i + 5] == '#' || ((str[i + 4] == '#' ||
					str[i + 3] == '#') && str[i - 1] == '#'))
		++j;
	else if (j == 3 * (x + 1) + x && (str[i - 1] == '#' ||
				str[i - 5] == '#'))
		++j;
	return (j);
}

int		valid_piece(char *str, int n)
{
	int		i;
	int		j;
	int		x;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	x = 0;
	while (str[i] == '.' || str[i] == '#' || str[i] == '\n')
	{
		if (str[i] == '#')
		{
			++k;
			j = valid(str, j, i, x);
		}
		if (str[i] == '\n' && str[i - 1] == '\n')
			++x;
		++i;
	}
	if (j != (4 * n) || k != (4 * n) || i != (20 * n + 1 * (n - 1)))
		return (0);
	return (1);
}
