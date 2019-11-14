/*
** EPITECH PROJECT, 2019
** BSQ_main
** File description:
** main function of BSQ
*/
#include "my.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "my.h"

int main(int argc, char **argv)
{
    int i = 0;
    if (argc != 2) {
        write(2, "error", 6);
        exit (84);
    }
    i = error(argv[1]);
    if (i == -1) {
        write(2, "error", 6);
        exit (84);
    }
    fs_get_number_from_first_line(argv[1]);
    return (0);
}
