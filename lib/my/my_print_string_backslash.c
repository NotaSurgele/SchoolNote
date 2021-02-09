/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myprintf-alexis.picard
** File description:
** my_print_string_none_ascii
*/

#include "my_printf.h"
#include <stdlib.h>

void print_octal(char c)
{
    int nb = c;
    int save = 0;
    int j = 1;
    char *res = malloc(sizeof(char) * (j + 1));

    (nb < 8)? my_putstr("00"): 0;
    (nb >= 8 && nb < 64)? my_putchar('0'): 0;
    for (int i = 0; nb != 0; i++) {
        save = nb % 8;
        nb /= 8;
        res[i] = save + 48;
        j++;
    }
    my_putstr(my_revstr(res));
    free(res);
    return;
}

void *my_print_string_backslash(va_list arg)
{
    char *str = va_arg(arg, char *);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 32 || str[i] >= 127) {
            my_putchar('\\');
            print_octal(str[i]);
        }
        else
            my_putchar(str[i]);
    }
    return arg;
}