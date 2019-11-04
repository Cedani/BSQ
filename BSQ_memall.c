/*
** EPITECH PROJECT, 2019
** memory allocation
** File description:
** mem_all
*/

char *mem_alloc(char const *a, char const *b)
{
    int i = my_strlen(a) + my_strlen(b) + 1;
    int k = 0;
    char *ret = malloc(sizeof(char) * i);

    i = my_strlen(a) - 1;
    while (k < i) {
        ret[k] = a[k];
        k++;
    }
    i = 0;
    while (b[i] != '\0') {
        ret[k] = b[i];
        k++;
        i++;
    }
    return (ret);
}
