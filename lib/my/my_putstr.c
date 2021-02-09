/*
** EPITECH PROJECT, 2020
** my_putstr.c
** File description:
** DIsplay the following str
*/
#include <unistd.h>
#include "my.h"

void my_putchar(char c);

ssize_t my_putstr(char const *str)
{
    return ((str) ? write(1, str, my_strlen(str)): write(1, "NULL", 4));
}