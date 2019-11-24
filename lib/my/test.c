/*
** EPITECH PROJECT, 2019
** test.c
** File description:
** criterion_test
*/

#include "../../include/my.h"
#include <stdio.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_all_stdout(void)
{
        cr_redirect_stdout();
}

Test(error, exit_code, .exit_code = 84)
{
    error("blo");
}

Test(error, should_return_0)
{
    int i = error("./lib/my/mouli_maps_solved/intermediate_map_34_137_empty");

    cr_assert_eq(i, 0);
}

Test(fs_get_number_from_first_line, exit_code, .exit_code = 84)
{
    int i = 0;
    fs_get_number_from_first_line("./tests/bla", &i);

}

Test(my_getnbr, should_return_minus_2)
{
    int i = my_getnbr("abc-2a");

    cr_assert_eq(i, -2);
}


Test(my_getnbr, should_return_2)
{
    int i = my_getnbr("abc2a");

    cr_assert_eq(i, 2);
}

Test(my_strtol, should_return_good_number)
{
    char *str;
    int i = my_strtol("   2a", &str);

    cr_assert_eq(i, 2);
}

Test(my_strtol, should_return_good_neg_number)
{
    char *str;
    int i = my_strtol("-2a", &str);

    cr_assert_eq(i, -2);
}

Test(my_strtol, exit_code, .exit_code = 84)
{
    char *str;
    int i = my_strtol("f2a", &str);
}

Test(my_strtold, exit_code, .exit_code = 84)
{
    char *str;
    int i = my_strtol("-a2a", &str);

}

Test(my_putchar, should_print_c, .init = redirect_all_stdout)
{
    my_putchar('a');

    cr_redirect_stdout();

    cr_assert_stdout_eq(97, "");
}