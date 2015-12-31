/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfriscca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/22 13:17:32 by rfriscca          #+#    #+#             */
/*   Updated: 2015/12/31 16:18:21 by rfriscca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "../includes/libft/libft.h"
# include <fcntl.h>

void	reset_piece(char *piece, char **square);
char	**solve(char **pieces, int size);
int		piece_fit(char *piece, char **square, int j, int k);
void	put_piece(char *piece, char **square, int j, int k);
char	**create_square(int size);
int		count_pieces(char *pieces);
void	create_tab(char *pieces, char **tab);
char	**save_pieces(int fd);
int		square_min_size(char **tab);
char	**taballoc(int l, int c);
int		valid_piece(char *str, int n);
void	alpha_pieces(char **tab);
#endif
