/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfriscca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/22 13:17:32 by rfriscca          #+#    #+#             */
/*   Updated: 2015/12/22 16:16:40 by rfriscca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "../libft/libft.h"

void	reset_piece(char *piece, char **square);
char	**solve(char **pieces, int size);
void	reset_square(char **square);
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
