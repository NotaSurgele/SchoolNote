/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myprintf-alexis.picard
** File description:
** my_print_char
*/

#include "my_printf.h"

void *my_print_char(va_list arg)
{
    char c = va_arg(arg, int);
    my_putchar(c);
    return 0;
}