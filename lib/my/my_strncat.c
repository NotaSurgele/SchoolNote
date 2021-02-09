/*
** EPITECH PROJECT, 2020
** my_strncat
** File description:
** concat n character into string and return it
*/

int my_strlen(char *str);

char *my_strncat(char *dest, char const *src, int nb)
{
    int size = my_strlen(dest);

    for (int i = 0; src[i] != '\0' && i < nb; i++, size++)
        dest[size] = src[i];
    dest[size] = '\0';

    return dest;
}