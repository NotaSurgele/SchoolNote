/*
** EPITECH PROJECT, 2020
** B-CPE-110-RUN-1-1-BSQ-alexis.picard
** File description:
** my_error_disp
*/

#include "my.h"

void my_error_disp(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_puterror(str[i]);
    return ;
}