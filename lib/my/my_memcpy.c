/*
** EPITECH PROJECT, 2021
** B-CPE-110-RUN-1-1-antman-alexis.picard
** File description:
** my_memcpy
*/

#include "my.h"

void *my_memcpy(void *dest, const void *src, size_t nbytes)
{
    unsigned char *dest_ptr = (char *)dest;
    unsigned char *src_ptr = (char *)src;

    for (int i = 0; i < nbytes; i++)
        dest_ptr[i] = src_ptr[i];
    return (void *)dest_ptr;
}