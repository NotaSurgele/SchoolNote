/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myprintf-alexis.picard
** File description:
** my_printf
*/

#include "my_printf.h"
#include "my_printf_format.h"
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

int display_string(char c, int i)
{
    if (c == '%') {
        i += 1;
        return i;
    } else
        my_putchar(c);
    return i;
}

void check_mod(int c, my_print_t *ptr, va_list arg, int j)
{
    if (c == '%')
        ptr[j].ptr(arg);
}

int check_char(char c_string, char c_ptr)
{
    if (c_string == c_ptr)
        return 1;
    return 0;
}

int redirect_to_function(my_print_t *ptr, char *str, va_list arg)
{
    for (int i = 0; str[i] != '\0'; i++) {
        i = display_string(str[i], i);
        for (int j = 0; j != 13; j++) {
            (check_char(str[i], ptr[j].option) == 1)? check_mod(str[i - 1],
                                                            ptr, arg, j): 0;
        }
    }
    return 0;
}

void my_printf(char *str, ...)
{
    va_list arg;
    my_print_t *ptr = malloc(sizeof(my_print_t));

    ptr = tab_init_basic();
    va_start(arg, str);
    if (redirect_to_format_function(str, arg))
        return;
    redirect_to_function(ptr, str, arg);
    va_end(arg);
    return;
}