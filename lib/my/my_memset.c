/*
** EPITECH PROJECT, 2021
** B-CPE-110-RUN-1-1-antman-alexis.picard
** File description:
** my_memset
*/

#include "my.h"
#include <stdio.h>

char *my_memset(void *s, char data, size_t n)
{
    char *s_ptr = (char *)s;

    for (int i = 0; i < n; i++)
        s_ptr[i] = data;
    return s;
}