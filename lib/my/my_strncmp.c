/*
** EPITECH PROJECT, 2020
** my_strncmp
** File description:
** Compare between string 1 and string 2 of n bytes
*/

int my_strlen(char const *str);

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    if (!s1 || !s2 || n == 0)
        return -2;
    while (i != n) {
        if (s1[i] == s2[i])
            i++;
        else
            return s1[i] - s2[i];
    }
    return 0;
}