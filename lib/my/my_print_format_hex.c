/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myprintf-alexis.picard
** File description:
** my_print_format_hex
*/

#include "my_printf.h"
#include <stdlib.h>

char *get_hex_value_low(long long nb)
{
    char *res = malloc(sizeof(char) * (9));
    char base[17] = "0123456789abcdef";
    int save = 0;

    for (int i = 0; nb != 0; i++) {
        save = nb % 16;
        res[i] = base[save];
        nb /= 16;
    }
    return res;
}

char *get_hex_value_up(long long nb)
{
    char *res = malloc(sizeof(char) * (9));
    char base[17] = "0123456789ABCDEF";
    int save = 0;

    for (int i = 0; nb != 0; i++) {
        save = nb % 16;
        res[i] = base[save];
        nb /= 16;
    }
    return res;
}

void *my_print_format_hex_low(va_list arg)
{
    char *res = my_revstr(get_hex_value_low(va_arg(arg, long long)));
    int i = my_strlen(res);

    for (int j = 0; res[j] != '\0'; j++) {
        if (j >= i - 4)
            my_putchar(res[j]);
    }
    return arg;
}

void *my_print_format_hex_up(va_list arg)
{
    char *res = my_revstr(get_hex_value_up(va_arg(arg, long long)));
    int i = my_strlen(res);

    for (int j = 0; res[j] != '\0'; j++) {
        if (j >= i - 4)
            my_putchar(res[j]);
    }
    return arg;
}