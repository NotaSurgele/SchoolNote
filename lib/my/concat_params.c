/*
** EPITECH PROJECT, 2020
** concat_params
** File description:
** concat_m_params
*/

#include <stdlib.h>

void my_putstr(char *str);

char *my_strcat(char *dest, char const *src);

char *concat_params(int argc, char **argv)
{
    char *tmp;
    int i = 0;
    int j = 0;

    for (; argv[i] != NULL; i++)
        for (; argv[i][j] != '\0'; j++);

    tmp = malloc(sizeof(char) * (j + 1));
    for (i = 0; argv[i] != NULL; i++) {
        tmp = my_strcat(tmp, argv[i]);
    }
    tmp[j] = '\0';
    return tmp;
}