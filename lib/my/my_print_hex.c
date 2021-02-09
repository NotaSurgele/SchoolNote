/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myprintf-alexis.picard
** File description:
** my_print_hex
*/

#include "my_printf.h"
#include <stdio.h>
#include <stdlib.h>

void *my_print_hex_low(va_list arg)
{
    long long nb = va_arg(arg, long long);
    char res[9] = {0};
    char base[17] = "0123456789abcdef";
    int save = 0;

    for (int i = 0; nb > 0; i++) {
        save = nb % 16;
        res[i] = base[save];
        nb /= 16;
    }
    my_putstr(my_revstr(res));
    return arg;
}

void *my_print_hex_up(va_list arg)
{
    long long nb = va_arg(arg, long long);
    char res[9] = {0};
    char base[17] = "0123456789ABCDEF";
    int save = 0;

    for (int i = 0; nb > 0; i++) {
        save = nb % 16;
        res[i] = base[save];
        nb /= 16;
    }
    my_putstr(my_revstr(res));
    return arg;
}