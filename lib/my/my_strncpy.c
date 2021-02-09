/*
** EPITECH PROJECT, 2020
** my_strncpy
** File description:
** copy the  character given in arg to anothger string
*/
#include "my.h"

int my_strlen(char const *str);

char *my_strncpy(char *dest, char const *src, int n)
{
    int i;

    for (i = 0; src[i] != '\0' && i != n; i++)
        dest[i] = src[i];
    for (; i < n; i++)
        dest[i] = '\0';
    return dest;
}