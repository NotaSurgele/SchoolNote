/*
** EPITECH PROJECT, 2020
** my_put_nbr
** File description:
** translate integer into char
*/

void my_putchar(char c);

int my_put_nbr(int nb)
{
    int modulo;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 0) {
        if (nb >= 10) {
            modulo = (nb % 10);
            nb = (nb - modulo) / 10;
            my_put_nbr(nb);
            my_putchar(48 + modulo);
        }
        else
            my_putchar(48 + nb % 10);
    }
    return 0;
}