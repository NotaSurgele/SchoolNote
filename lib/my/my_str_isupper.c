/*
** EPITECH PROJECT, 2020
** my_strisupper
** File description:
** return 1 if every character is in upcase else return 0
*/

int my_str_isupper(char const *str)
{
    int i = 0;
    int check = 0;

    if (!str)
        return 1;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z')
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