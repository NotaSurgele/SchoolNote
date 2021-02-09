/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myprintf-alexis.picard
** File description:
** my_print_adress
*/

#include "my_printf.h"

void *my_print_adress(va_list arg)
{
    my_putstr("0x7ff");
    my_print_hex_low(arg);
    return arg;
}