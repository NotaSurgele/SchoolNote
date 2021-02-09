/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myprintf-alexis.picard
** File description:
** check_next
*/

#include "my_printf.h"

int check_next(char next)
{
    if (next >= 'a' && next <= 'z')
        return 1;
    if (next >= 'A' && next <= 'Z')
        return 1;
    return 0;
}