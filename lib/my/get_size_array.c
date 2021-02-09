/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myls-alexis.picard
** File description:
** get_size_array
*/
#include <stdio.h>

int get_size_array(char **array)
{
    int i;
    for (i = 0; array[i] != NULL; i++);

    return i;
}