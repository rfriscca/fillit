#ifndef FILLIT_H
# define FILLIT_H

# include "../libft/libft.h"

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
