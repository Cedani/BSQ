/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** useful function
*/


#ifndef _BSQ_
#define  _BSQ_

void my_putchar(char c);
int my_putstr(char const *str);
int my_getnbr(char const *str);
int my_put_nbr(int nb);
int fs_open_file(char const *filepath);
void fs_understand_return_of_read(int fd, char *buffer, int size);
void fs_cat_500_bytes(char const *filepath);
void fs_print_first_line(char const *filepath);
void array_1d_print_ints(int const *arr, int size);
void array_1d_sum(int const *arr, int size);
void array_2d_sum(int **arr, int nb_rows, int nb_col);
void array_2d_how_many(int **arr, int nb_rows, int nb_col, int number);
void fs_cat_x_bytes(char const *filepath, int x);
int error(char const *filepath);



#endif
