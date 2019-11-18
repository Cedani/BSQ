/*
** EPITECH PROJECT, 2019
** open_file
** File description:
** functions to load map
*/

#include "../../include/my.h"

void finding_square(char **tab)
{
    for (int i = 0; tab[i]; i += 1) {
        for (int j = 0; tab[i]; j += 1) {
            if (tab[i][j] == 'o') {

            }
        }
    }
}

void disp_bsq(char **tab)
{
    for (int i = 0; tab[i]; i += 1)
        my_putstr(tab[i]);
}