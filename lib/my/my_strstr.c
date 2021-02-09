/*
** EPITECH PROJECT, 2020
** my_strstr
** File description:
** find str occurence
*/

char *my_strstr(char *str, char const *to_find)
{
    int x = 0;
    int e = 0;

    if (!to_find)
        return str;
    for (int i = 0; str[i] != '\0'; i++) {
        if (to_find[x] == str[i]) {
            x++;
            e = i;
        }
        if (to_find[x] == '\0') {
            return &str[e] - x + 1;
        }
    }
    return str;
}