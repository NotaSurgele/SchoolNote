/*
** EPITECH PROJECT, 2020
** my_strlen.c
** File description:
** return the size of the string given in argument
*/

#include <stddef.h>

size_t my_strlen(char const *str)
{
    size_t size = 0;

    if (str)
        for (; str[size] != '\0'; size++);
    return size;
}