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
#include "my.h"

int error(char const *filepath)
{
    int fd = fs_open_file(filepath);
    if (fd == -1)
        return (-1);
}
