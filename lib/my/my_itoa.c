/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myprintf-alexis.picard
** File description:
** my_itoa
*/
#include <stdlib.h>
#include <stdio.h>
#include "my_printf.h"

char *my_itoa(long long nb)
{
    int j = 1;
    char *res = malloc(sizeof(char) * (j + 1));
    int save = 0;
    int i;

    for (i = 0; nb != 0; i++) {
        save = nb % 10;
        nb /= 10;
        res[i] = save + 48;
        j++;
    }
    res[i] = '\0';
    return my_revstr(res);
}