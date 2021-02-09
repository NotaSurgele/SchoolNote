/*
** EPITECH PROJECT, 2020
** my_str_isprintabl
** File description:
** function that check if the character is printable
*/

int my_str_isprintable(char const *str)
{
    int i = 0;
    int check = 0;

    while (str[i] != '\0') {
        if (str[i] > 32 && str[i] < 127)
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