/*
** EPITECH PROJECT, 2020
** my_str_isnum.c
** File description:
** return 1 if every character is digit else return 0
*/

int my_str_isnum(char const *str)
{
    int i = 0;

    if (!str)
        return 1;
    for (int check = 0; str[i] != '\0' ; ) {
        if (str[i] >= '0' && str[i] <= '9')
            i++;
        else
            check = 1;
        if (check == 1)
            return 0;
    }
    if (str[i] == '\0')
        return 1;
    return 0;
}