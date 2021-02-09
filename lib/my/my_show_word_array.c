/*
** EPITECH PROJECT, 2020
** my_show_word_array
** File description:
** Display what inside an array
*/

#include <stdlib.h>

void my_putstr(char const *str);

void my_putchar(char c);

int my_show_word_array(char **str)
{
    for (int i = 0; str[i] != NULL; i++) {
        my_putstr(str[i]);
        my_putchar('\n');
    }
    return 0;
}
