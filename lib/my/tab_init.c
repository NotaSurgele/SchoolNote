/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myprintf-alexis.picard
** File description:
** struct_init
*/

#include "my_printf.h"
#include "my_printf_format.h"
#include <stdlib.h>

my_print_t *tab_init_basic(void)
{
    my_print_t *op = malloc(sizeof(*op) * (13));

    op[0] = (my_print_t) {'d', &my_print_int};
    op[1] = (my_print_t) {'i', &my_print_int};
    op[2] = (my_print_t) {'c', &my_print_char};
    op[3] = (my_print_t) {'s', &my_print_string};
    op[4] = (my_print_t) {'n', &my_print_nothing};
    op[5] = (my_print_t) {'%', &my_print_mod};
    op[6] = (my_print_t) {'x', &my_print_hex_low};
    op[7] = (my_print_t) {'X', &my_print_hex_up};
    op[8] = (my_print_t) {'o', &my_print_octale};
    op[9] = (my_print_t) {'p', &my_print_adress};
    op[10] = (my_print_t) {'S', &my_print_string_backslash};
    op[11] = (my_print_t) {'u', &my_print_unsigned_int};
    op[12] = (my_print_t) {'b', &my_print_binary};
    return op;
}