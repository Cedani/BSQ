/*
** EPITECH PROJECT, 2019
** BSQ open_file
** File description:
** open file
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "my.h"

int fs_open_file(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);

    return (fd);
}

void fs_understand_return_of_read(int fd, char *buffer, int size)
{
    int cmp = read(fd, buffer, size);

    if (cmp == -1) {
        my_putstr("read failed\n");
        return;
    }
    if (cmp == 0)
        my_putstr("read has nothing more to read");
    else if (cmp < size)
        my_putstr("read didn't complete the entire buffer");
    else if (cmp == size)
        my_putstr("read completed the entire buffer");
}

void fs_cat_500_bytes(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    char buffer[500 + 1];
    int i = read(fd, buffer, 500);

    my_putstr(buffer);
    close(fd);
}

void fs_cat_x_bytes(char const *filepath, int x)
{
    int fd = open(filepath, O_RDONLY);
    char buffer[x + 1];
    int i = read(fd, buffer, x);

    my_putstr(buffer);
    close(fd);
}

char *fs_print_first_line(int fd)
{
    int i = 0;
    char test;
    char *result = malloc(sizeof(*result));

    while (test != '\n') {
        read(fd, &test, 1);
        if (test != '\n') {
            result[i] = test;
            i++;
        }
    }
    return (result);
}
