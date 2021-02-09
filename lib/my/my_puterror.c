/*
** EPITECH PROJECT, 2020
** B-CPE-110-RUN-1-1-BSQ-alexis.picard
** File description:
** my_puterror
*/

#include <unistd.h>

void my_puterror(char c)
{
    write(2, &c, 1);
}