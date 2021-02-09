/*
** EPITECH PROJECT, 2021
** B-PSU-101-RUN-1-1-minishell1-alexis.picard
** File description:
** change_in_tab
*/
#include <stdlib.h>
#include "my.h"

char **change_in_tab(char *WHERE, char **to_change, char *new)
{
    for (int i = 0; to_change[i] != NULL; i++) {
        if (my_strcmp(WHERE, to_change[i]) == 0) {
            my_free(1, to_change[i]);
            to_change[i] = my_strdup(new);
        }
    }
    return to_change;
}