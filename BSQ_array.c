/*
** EPITECH PROJECT, 2019
** BSQ_array
** File description:
** create array
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "my.h"


void array_1d_print_ints(int const *arr, int size)
{
    for (int i = 0; i < size; i++) {
        my_put_nbr(arr[i]);
        my_putchar('\n');
    }
}

void array_1d_sum(int const *arr, int size)
{
    int result = 0;
    for (int i = 0; i < size; i++)
            result += arr[i];
    my_put_nbr(result);
}

void array_2d_sum(int **arr, int nb_rows, int nb_col)
{
    int result = 0;
    for (int i = 0; i < nb_rows; i++) {
        for (int j = 0; j < nb_col; j++)
            result += arr[i][j];
    }
    my_put_nbr(result);
}

void array_2d_how_many(int **arr, int nb_rows, int nb_col, int number)
{
    int result = 0;
    for (int i = 0; i < nb_rows; i++) {
        for (int j = 0; j < nb_col; j++)
            if (arr[i][j] == number)
                result++;
    }
    my_put_nbr(result);
}
