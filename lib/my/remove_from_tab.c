/*
** EPITECH PROJECT, 2021
** B-PSU-101-RUN-1-1-minishell1-alexis.picard
** File description:
** remove_from_tab
*/
#include "my.h"
#include <stdlib.h>

char **remove_from_tab(char **to_remove, char *WHERE)
{
    char **new = NULL;
    int i = 0;
    int j = 0;

    if (!to_remove || !WHERE)
        return NULL;
    new = malloc(sizeof(char *) * (get_size_array(to_remove)));
    for (i = 0; to_remove[i] != NULL; i++, j++) {
        if (my_strncmp(to_remove[i], WHERE, my_strlen(WHERE)) == 0) {
            j = i;
            i++;
        }
        if (to_remove[i] == NULL) {
            new[j] = NULL;
            my_free_array(to_remove);
            return new;
        }
        new[j] = my_strdup(to_remove[i]);
    }
    return new;
}