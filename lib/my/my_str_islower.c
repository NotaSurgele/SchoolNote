/*
** EPITECH PROJECT, 2020
** my_strislower
** File description:
** if every character is in
*/

int my_str_islower(char const *str)
{
    int i = 0;
    int check = 0;

    if (!str)
        return 1;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z')
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