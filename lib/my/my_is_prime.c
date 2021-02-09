/*
** EPITECH PROJECT, 2020
** my_is_prime.c
** File description:
** Function that return 1
*/

int my_is_prime(int nb)
{
    int i = 1;
    int check = 0;

    if (nb == 1)
        return 0;
    if (nb == 0)
        return 0;
    while (i <= 50000) {
        if (nb % i == 0)
            check++;
        if (check == 2 && i == 50000)
            return 1;
        if (check > 2)
            return 0;
        i++;
    }
    return 0;
}