/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myprintf-alexis.picard
** File description:
** my_print_int
*/

#include "my_printf.h"
#include <stdint.h>
#include <stdarg.h>

void *my_print_unsigned_int(va_list arg)
{
    unsigned int nb = va_arg(arg, unsigned int);
    my_put_nbr(nb);
    return 0;
}

void *my_print_int(va_list arg)
{
    int nb = va_arg(arg, int);
    my_put_nbr(nb);
    return 0;
}