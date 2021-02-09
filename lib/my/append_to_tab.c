/*
** EPITECH PROJECT, 2021
** B-PSU-101-RUN-1-1-minishell1-alexis.picard
** File description:
** append_to_tab
*/

#include "my.h"
#include <stdlib.h>
#include <stdarg.h>

char **append_to_tab(char **to_append, char *to_add)
{
    char **new = NULL;
    int i = 0;

    if (!to_append)
        return NULL;
    new = malloc(sizeof(char *) * (get_size_array(to_append) + 2));
    for (i = 0; to_append[i] != NULL; i++)
        new[i] = my_strdup(to_append[i]);
    new[i] = my_strdup(to_add);
    new[i + 1] = NULL;
    return new;
}