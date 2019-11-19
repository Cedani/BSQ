/*
** EPITECH PROJECT, 2019
** my_sort_int_array
** File description:
** sort in ascending order an array of int
*/

#include "../../include/my.h"

void my_sort_int_array(int * tab , int size)
{
    int j = 0;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) {
            cond(tab, j);
        }
    }
}

void cond(int *tab, int j)
{
    if (tab[j] > tab[j + 1]) {
        int swap = tab[j];
        tab[j] = tab[j + 1];
        tab[j + 1] = swap;
    }
}