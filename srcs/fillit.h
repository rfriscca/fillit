/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfriscca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 12:51:04 by rfriscca          #+#    #+#             */
/*   Updated: 2015/12/08 12:51:31 by rfriscca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

char	**create_square(int size);
int		square_min_size(char **tab);
char	**taballoc(int l, int c);
int		valid_piece(char *str);
#endif
