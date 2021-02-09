/*
** EPITECH PROJECT, 2020
** my_putstr_mul
** File description:
** display multiple string
*/

void my_putchar(char c);

int my_put_nbr(int nb);

void my_putstr_mul(char letter, int nb, int pourcent, int rest)
{
    my_putchar(letter);
    my_putchar(':');
    my_put_nbr(nb);
    my_putchar(' ');
    my_putchar('(');
    my_put_nbr(pourcent);
    my_putchar('.');
    my_putchar(')');
    my_putchar('\n');
    return;
}