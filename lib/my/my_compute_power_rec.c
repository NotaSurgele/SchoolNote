/*
** EPITECH PROJECT, 2020
** my_compute_power_rec.c
** File description:
** write an recursive
*/

int my_compute_power_rec(int nb, int p)
{
    if (p == 1)
        return 0;
    if (nb == 0)
        return 1;
    if (p < 0)
        return 0;
    if (p == 0)
        return 1;
    if (p > 2147483647 || p < -2147483647)
        return 0;
    if (nb > 2147483647 || nb < -2147483647)
        return 0;
    else
        return nb * my_compute_power_rec(nb, p - 1);
}