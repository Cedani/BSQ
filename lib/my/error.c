/*
** EPITECH PROJECT, 2019
** error
** File description:
** error system
*/

#include "../../include/my.h"

int error(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    char s;

    if (fd == -1) {
        write(2, "error", 6);
        exit (84);
    }
    close (fd);
    return (0);
}

char *fs_get_number_from_first_line(char const *filepath, int *nb_line)
{
    struct stat stat1;
    int fd = open(filepath, O_RDONLY);
    char *str;

    stat(filepath, &stat1);
    str = malloc(sizeof(char) * stat1.st_size + 1);
    str[stat1.st_size] = '\0';
    read(fd, str, stat1.st_size);
    *nb_line = my_strtol(str, &str);
    if (*nb_line <= 0) {
        exit (84);
    }
    str += 1;
    fd = (my_strlen(str) + 1);
    if (fd % *nb_line != 0
        || count_good_size(str) != *nb_line - 1) {
        exit (84);
    }
    return (str);
}

int count_good_size(char *str)
{
    int j = 0;
    for (int i = 0; str[i]; i += 1)
        if (str[i] == '\n')
            j += 1;
    return (j);
}

void repacking(char **tab)
{
    for (int y = 0; tab[y]; y += 1) {
        for (int x = 0; tab[y][x]; x += 1) {
            if (tab[y][x] == '0')
                tab[y][x] = 'o';
            else if (tab[y][x] != 'x')
                tab[y][x] = '.';
        }
    }
}