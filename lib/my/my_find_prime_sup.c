/*
** EPITECH PROJECT, 2020
** my_find_prime_sup.c
** File description:
** A function that returns
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    int i = 1;
    int check = 2;

    while (i < nb) {
        if (my_is_prime(i) == 1)
            check = i;
        i++;
    }
    return check;
}