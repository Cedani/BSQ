/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** useful function
*/


#ifndef _BSQ_
#define  _BSQ_

void my_putchar(char c);
int error_strtol(char *str, int i);
int count_space(char *str);
int find_num(int i, char *str);
int my_putstr(char const *str);
int my_getnbr(char const *str);
int my_put_nbr(int nb);
int fs_open_file(char const *filepath);
void fs_understand_return_of_read(int fd, char *buffer, int size);
void fs_cat_500_bytes(char const *filepath);
char *fs_print_first_line(int fd);
void array_1d_print_ints(int const *arr, int size);
void array_1d_sum(int const *arr, int size);
void array_2d_sum(int **arr, int nb_rows, int nb_col);
void array_2d_how_many(int **arr, int nb_rows, int nb_col, int number);
void fs_cat_x_bytes(char const *filepath, int x);
int error(char const *filepath);
int attrib_sign(char const *str, int i);
int attrib_num(char const *str, int i);
char *fs_get_number_from_first_line(char const *filepath, int *nb_line);
int my_strtol(char *str, char **ptr);
char *attrib_string(char *str, char **ptr, int i);
int my_strlen(char const *str);
int count_good_size(char *str);
char **my_str_to_word_array(char *str);
#endif
