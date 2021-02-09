/*
** EPITECH PROJECT, 2020
** B-CPE-110-RUN-1-1-BSQ-alexis.picard
** File description:
** my_free
*/

#include <stdarg.h>
#include <stdlib.h>
#include "my.h"

void my_free_array(char **array)
{
    for (int i = 0; array[i] != NULL; i++)
        free(array[i]);
    return;
}

void my_free(int n, ...)
{
    va_list arg;

    va_start(arg, n);
    for (int i = 0; i < n; i++)
        free(va_arg(arg, void *));
    va_end(arg);
    return;
}