/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myprintf-alexis.picard
** File description:
** my_print_string
*/

#include "my_printf.h"

void *my_print_string(va_list arg)
{
    char *str = va_arg(arg, char *);
    my_putstr(str);
    return 0;
}
