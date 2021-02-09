/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myprintf-alexis.picard
** File description:
** my_print_mod
*/

#include "my_printf.h"

void *my_print_mod(va_list arg)
{
    int c = '%';
    my_putchar(c);
    return arg;
}