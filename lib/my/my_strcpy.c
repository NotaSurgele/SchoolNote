/*
** EPITECH PROJECT, 2020
** A function that copy a string into anotger string
** File description:
** my_strcpy
*/
#include <stdlib.h>

int my_strlen(char const *str);

char *my_strcpy(char *dest, char *src)
{
    int i = 0;

    for (i = 0; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}