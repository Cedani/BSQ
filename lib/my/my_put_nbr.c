/*
** EPITECH PROJECT, 2019
** CPool_Day06
** File description:
** my_put_nbr.c
*/

#include "../../include/my.h"

int my_put_nbr(int nb)
{
    int nbr = nb;
    if (nbr < 0){
        my_putchar('-');
        nbr *= -1;
    }

    if (nbr >= 10) {
        my_put_nbr(nbr / 10);
        my_putchar((nbr % 10) + 48);
    } else {
        my_putchar((nbr % 10) + 48);
    }
    return nb;
}
