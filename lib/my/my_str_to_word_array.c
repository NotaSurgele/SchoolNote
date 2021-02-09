/*
** EPITECH PROJECT, 2020
** my_str_to_word_array
** File description:
** transform a string in a char **
*/

#include <stdlib.h>

int check_alpha(char c)
{
    if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
        return 1;
    if (c >= '0' && c <= '9')
        return 1;
    if (c == '/' || c == '-' || c  == '.')
        return 1;
    if (c == '_' || c == '~' || c == '*')
        return 1;
    return 0;
}

int nb_words(char const *str)
{
    int i = 0;
    int words = 0;

    while (str[i] != '\0') {
        if (check_alpha(str[i]) == 1)
            words++;
        while (check_alpha(str[i]) == 1 && str[i] != '\0')
            i++;
        if (str[i] != '\0')
            i++;
    }
    return words;
}

int word_len(char const *str, int k)
{
    int len = 0;

    while (check_alpha(str[k]) == 1) {
        k++;
        len++;
    }
    return len;
}

char **my_str_to_word_array(char const *str)
{
    char **array = NULL;
    int i = 0;
    int k = 0;
    int a = 0;

    array = malloc(sizeof(char *) * (nb_words(str) + 1));
    while (i != nb_words(str)) {
        a = 0;
        while (check_alpha(str[k]) == 0)
            k++;
        array[i] = malloc(sizeof(char) * (word_len(str, k) + 1));
        while (check_alpha(str[k]) == 1) {
            array[i][a] = str[k];
            a++;
            k++;
        }
        array[i][a] = '\0';
        i++;
    }
    array[i] = NULL;
    return array;
}