/*
** EPITECH PROJECT, 2019
** my_str_to_word_array
** File description:
** transform a  string into an array of string
*/

#include "../../include/my.h"

int jump_nonalpha(char str);

int my_len(char *str, int i);

int biglen(char *str, int size);

char *convert(char const *src, char *dest, int *i);

char **my_str_to_word_array(char *str)
{
    char **tab = NULL;
    int size_tab = 0;
    int i = 0;
    int k = 0;
    int size = 0;

    size_tab = biglen(str, size_tab);
    tab = malloc((sizeof(char *)) * (size_tab + 1));
    while (k < my_strlen(str)) {
        if (jump_nonalpha(str[k]) == 0) {
            size = my_len(str, k);
            tab[i] = malloc((sizeof(char)) * (size + 1));
            tab[i] = convert(str, tab[i], &k);
            i++;
        }
        k++;
    }
    tab[i] = NULL;
    return (tab);
}

int jump_nonalpha(char str)
{
    if (str == '\n') {
        return (1);
    } else if (str == '.' || str == 'o'){
        return (0);
    }
    else {
        write(2, "error", 6);
        exit(84);
    }
}

int my_len(char *str, int i)
{
    int j = 0;
    int k = i;

    while (k <= my_strlen(str) - 1 && jump_nonalpha(str[k]) == 0) {
        j++;
        k++;
    }
    return (j);
}

int biglen(char *str, int size)
{
    int i = 0;

    while (str[i] != '\0') {
        if (jump_nonalpha(str[i]) == 0 && i == 0) {
            size++;
        }
        if ((i > 0) && (jump_nonalpha(str[i]) == 0)
            && (jump_nonalpha(str[i - 1]) == 1)) {
            size++;
        }
        i++;
    }
    return (size);
}

char *convert(char const *src, char *dest, int *i)
{
    int j = 0;

    while (*i <= my_strlen(src) - 1 && jump_nonalpha(src[*i]) == 0) {
        dest[j] = src[*i];
        *i += 1;
        j += 1;
    }
    dest[j] = '\0';
    return (dest);
}