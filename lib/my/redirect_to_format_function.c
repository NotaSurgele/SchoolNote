/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myprintf-alexis.picard
** File description:
** redirect_to_format_function
*/

#include "my_printf_format.h"
#include <string.h>

int redirect_to_format_function(char *str, va_list arg)
{
    if (my_strcmp(str, "%ld") == 0) {
        my_print_format_long_long(arg);
        return 1;
    }
    if (my_strcmp(str, "%lu") == 0) {
        my_print_format_unsigned_long(arg);
        return 1;
    }
    if (my_strcmp(str, "%hx") == 0) {
        my_print_format_hex_low(arg);
        return 1;
    }
    if (my_strcmp(str, "%hX") == 0) {
        my_print_format_hex_up(arg);
        return 1;
    }
    return 0;
}