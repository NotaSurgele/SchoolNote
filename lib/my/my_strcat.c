/*
** EPITECH PROJECT, 2020
** my_strcat.c
** File description:
** concat two strings and return it
*/
#include <string.h>
#include "my.h"
#include <stdlib.h>

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    char *tmp = malloc(sizeof(char) * (my_strlen(dest) + my_strlen(src) + 1));
    int i = 0;

    for (int j = 0; dest[j]; tmp[i] = dest[j], i++, j++);
    for (int j = 0; src[j]; tmp[i] = src[j], i++, j++);
    tmp[i] = '\0';
    return tmp;
}