/*
** EPITECH PROJECT, 2020
** my_getnbr
** File description:
** getnumber
*/

int my_putstr(char const *str);

int my_strlen(char const *str);

int over_max(int nb)
{
    if (nb <= -2147483647 || nb >= 2147483647)
        return 1;
    return 0;
}

int my_getnbr(char const *str)
{
    int i = 0;
    int a = 0;
    int isneg = 1;

    while (str[i] != '\0' && (str[i] == '-' || str[i] == '+')) {
        if (str[i] == '-' && str[i + 1] >= '0' && str[i + 1] <= '9')
            isneg = isneg * - 1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        a = a * 10;
        a = a + str[i] - 48;
        i++;
    }
    if (over_max(a * isneg) == 1)
        return 0;
    return a * isneg;
}