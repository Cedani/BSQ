/*
** EPITECH PROJECT, 2019
** BSQ_main
** File description:
** main function of BSQ
*/

#include "./include/my.h"

int main(int argc, char **argv)
{
    int i = 0;
    if (argc != 2) {
        write(2, "error", 6);
        exit (84);
    }
    i = error(argv[1]);
    if (i == -1) {
        write(2, "error", 6);
        exit (84);
    }
    int nb_line = 0;
    char *str = fs_get_number_from_first_line(argv[1], &nb_line);
    char **tab;
    tab = my_str_to_word_array(str);
    for (int i = 0; tab[i]; i += 1) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
    return (0);
}
