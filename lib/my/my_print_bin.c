/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myprintf-alexis.picard
** File description:
** my_print_bin
*/

#include "my_printf.h"
#include <stdlib.h>

void *my_print_binary(va_list arg)
{
    unsigned int nb = va_arg(arg, unsigned int);
    int save = 0;
    int j = 1;
    char *res = malloc(sizeof(char) * (j + 1));

    for (int i = 0; nb != 0; i++) {
        save = nb % 2;
        nb /= 2;
        res[i] = save + 48;
        j++;
    }
    my_putstr(my_revstr(res));
    free(res);
    return arg;
}