/*
** EPITECH PROJECT, 2020
** my_strcapitalize.c
** File description:
** write a function that capitalize the
*/

char *my_strcapitalize(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i + 1] >= 'A' && str[i + 1] <= 'Z')
            str[i + 1] += 32;
        if (str[i] == ' ' || str[i] == '-' || str[i] == '+' || str[i] == ';') {
            if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
                str[i + 1] -= 32;
        }
    }
    return str;
}