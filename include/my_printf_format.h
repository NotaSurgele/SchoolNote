/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myprintf-alexis.picard
** File description:
** my_printf_format
*/

#ifndef MY_PRINTF_FORMAT_H_
#define MY_PRINTF_FORMAT_H_

    #include <stdarg.h>
    #include "my_printf.h"
    void *my_print_format_unsigned_long(va_list arg);
    char *my_itoa(long long nb);
    int redirect_to_format_function(char *str, va_list arg);
    int my_strcmp(char const *s1, char const *s2);
    void *my_print_format_long_long(va_list arg);
    void *my_print_format_hex_low(va_list arg);
    void *my_print_format_hex_up(va_list arg);

#endif /* !MY_PRINTF_FORMAT_H_ */