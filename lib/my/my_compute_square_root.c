/*
** EPITECH PROJECT, 2020
** my_comput_square_root.c
** File description:
** Return the returned
*/

int my_compute_square_root(int nb)
{
    int result = 0;
    int i = 2;

    while (i <= 2147483647 && i > 1) {
        result = nb % i;
        if (result == 0 && i * i == nb)
            return i;
        if (i == 9 && result != 0)
            return 0;
        i++;
    }
    return 0;
}