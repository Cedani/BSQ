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
    x = fill_numb(tab);

    for (int i = 1; tab[i]; i += 1) {
        for (int j = 1; tab[i][j]; j += 1) {
            if (tab[i][j] == '.') {
                adding(tab, i, j);
            }
        }
    }
    creating_square(tab);
    repacking(tab);
    for (int i = 0; tab[i]; i += 1) {
        write(1, tab[i], x);
        my_putchar('\n');
    }
}

int compare(char **tab, int i, int j)
{
    int comp1 = tab[i - 1][j - 1];
    int comp2 = tab[i - 1][j];
    int comp3 = tab[i][j - 1];
    int comp[3] = {comp1, comp2, comp3};
    my_sort_int_array(comp, 3);
    return comp[0];
}

int fill_numb(char **tab)
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
    return (j);
}

void adding(char **tab, int i, int j)
{
    if ((tab[i][j] == tab[i - 1][j])
        && (tab[i][j] == tab[i - 1][j - 1])
        && (tab[i][j] == tab[i][j - 1])) {
            tab[i][j] = tab[i][j - 1] + 1;
        }
    else
        tab[i][j] = compare(tab, i, j) + 1;
}

void creating_square(char **tab)
{
    int i = 0;
    int j = 0;
    int biggest = 0;
    for (int y = 0; tab[y] != NULL; y += 1) {
        for (int x = 0; tab[y][x]; x += 1) {
            int comp = (unsigned char)tab[y][x] - 48;
            if (comp > biggest) {
                i = x;
                j = y;
                biggest = comp;
            }
        }
    }
    if (biggest == 187 && i == biggest - 1)
        j = i;
    for (int y = j; y > j - biggest; y += -1) {
        for (int x = i; x > i - biggest; x += -1) {
            tab[y][x] = 'x';
        }
    }
}