/*
** EPITECH PROJECT, 2020
** my_revstr
** File description:
** rev a string and return it
*/
#include "my.h"
#include <stdio.h>
#include <stdlib.h>

char *my_revstr(char *str)
{
    int x = 0;
    char *dup = NULL;

    dup = malloc(sizeof(char) * (my_strlen(str) + 1));

    for (int i = my_strlen(str) - 1; i != 0 && i > 0; i--) {
        dup[x] = str[i];
        x++;
    }
    dup[x] = '\0';
    return dup;
}