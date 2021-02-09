/*
** EPITECH PROJECT, 2021
** B-CPE-110-RUN-1-1-antman-alexis.picard
** File description:
** my_realloc
*/
#include "my.h"
#include <stdlib.h>

void *my_realloc(void *ptr, size_t length)
{
    void *new_size;

    if (!ptr)
        return malloc(length);
    new_size = malloc(length);
    if (new_size)
        my_memcpy(new_size, ptr, length);
    free(ptr);
    return new_size;
}