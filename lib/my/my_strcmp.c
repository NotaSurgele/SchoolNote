/*
** EPITECH PROJECT, 2020
** my_strcmp
** File description:
** compare two strings if the two string
*/

int my_strlen(char const *str);

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;
    int x = 0;
    int check = 0;

    if (!s1 || !s2)
        return -1;
    if (my_strlen(s1) == my_strlen(s2))
        check = 1;
    while (s1[i] != '\0' && check == 1) {
        if (s2[x] == s1[i])
            x++;
        i++;
    }
    if (s1[i] == '\0' && s2[x] == '\0')
        return 0;
    return -1;
}