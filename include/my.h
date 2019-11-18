/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** useful function
*/


#ifndef _BSQ_
#define  _BSQ_

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>

void my_putchar(char c);
int error_strtol(char *str, int i);
int count_space(char *str);
int find_num(int i, char *str);
int my_putstr(char const *str);
int my_getnbr(char const *str);
int my_put_nbr(int nb);
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
