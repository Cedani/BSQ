/*
** EPITECH PROJECT, 2019
** open_file
** File description:
** functions to load map
*/

#include "../../include/my.h"

void finding_square(char **tab)
{
    int x = 0;
    int y = 0;
    fill_numb(tab);
}

void disp_bsq(char **tab)
{
    for (int i = 0; tab[i]; i += 1)
        my_putstr(tab[i]);
}

void compare(char **tab, int i, int j)
{

}

void fill_numb(char **tab)
{
    int i = 0;
    int j = 0;
    while (tab[0][j]) {
        if (tab[0][j] == '.')
            tab[0][j] = '1';
        j += 1;
    }
    while (tab[i]) {
        if (tab[i][0] == '.')
            tab[i][0] = '1';
        i += 1;
    }

    for (int k = 0; tab[k]; k += 1)
        for (int m = 0; tab[k][m]; m += 1)
            if (tab[k][m] == 'o')
                tab[k][m] = '0';
}