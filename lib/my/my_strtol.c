/*
** EPITECH PROJECT, 2019
** my_strtol
** File description:
** my_strtol
*/

#include "../../include/my.h"

int my_strtol(char *str, char **ptr)
{
    int i = count_space(str);
    char *test;
    int m = 0;
    int k = 0;

    if (error_strtol(str, i) == 0)
        exit(84);
    m = find_num(i, str);
    test = malloc(sizeof(char) * m + 1);
    while (k < m) {
        test[k] = str[i];
        i++;
        k++;
    }
    k = my_getnbr(test);
    free(test);
    ptr[0] = attrib_string(str, ptr, i);
    return (k);
}

int error_strtol(char *str, int i)
{
    if (str[i] != '-' && (str[i] < '0' || str[i] > '9'))
        return (0);
    if (str[i] == '-' && (str[i + 1] < '0' || str[i + 1] > '9'))
        return (0);
    return (1);
}

int count_space(char *str)
{
    int i = 0;
    for (i = 0; str[i] == ' '; i++);
    return (i);
}

int find_num(int i, char *str)
{
    int sign = 0;
    int m = 0;

    while ((str[i] == '-' && i == 0) || (str[i] >= '0' && str[i] <= '9')) {
        i++;
        m++;
    }
    return (m);
}

char *attrib_string(char *str, char **ptr, int i)
{
    int j = 0;

    ptr[0] = malloc(sizeof(char) * (my_strlen(str) - i) + 1);
    while (str[i] != '\0') {
        ptr[0][j] = str[i];
        i += 1;
        j += 1;
    }
    ptr[0][j] = '\0';
    return (ptr[0]);
}
