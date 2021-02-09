/*
** EPITECH PROJECT, 2020
** my_strdup
** File description:
** duplicate and alloc new string
*/
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "my.h"

int my_strlen(char const *str);

char *my_strdup(char const *str)
{
    char *tmp = NULL;

    tmp = malloc(sizeof(char) * (my_strlen(str) + 1));
    return my_strcpy(tmp, str);
}