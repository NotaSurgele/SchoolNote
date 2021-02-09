/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myprintf-alexis.picard
** File description:
** my_print_format_unsigned_long
*/

#include "my_printf_format.h"
#include "my_printf.h"

void *my_print_format_unsigned_long(va_list arg)
{
    unsigned long nb = va_arg(arg, unsigned long);
    char *res = my_itoa(nb);
    my_putstr(res);
    return arg;
}