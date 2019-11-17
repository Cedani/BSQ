/*
** EPITECH PROJECT, 2019
** error
** File description:
** error system
*/
#include "my.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
//#include "my.h"

int error(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    if (fd == -1) {
        write(2, "error", 6);
        exit (84);
    }

    close (fd);
    return (0);
}

char **recup_map(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
}

char *fs_get_number_from_first_line(char const *filepath, int *nb_line)
{
    struct stat *stat1;
    int j = 0;
    stat1 = malloc(sizeof(*stat1));
    int fd = open(filepath, O_RDONLY);
    stat(filepath, stat1);
    char *str = malloc(sizeof(char) * stat1->st_size);
    read(fd, str, stat1->st_size);
    *nb_line = my_strtol(str, &str);
    if (*nb_line <= 0) {
        write(2, "error", 6);
        exit (84);
    }
    str += 1;
    j = my_strlen(str) + 1;
    int k = count_good_size(str);
    if (j % *nb_line != 0 || k != *nb_line - 1) {
        write(2, "error", 6);
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
