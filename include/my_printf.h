/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myprintf-alexis.picard
** File description:
** my_printf
*/

#ifndef MY_PRINTF_H_
#define MY_PRINTF_H_
    #include <stdarg.h>
    #include <sys/types.h>
    typedef struct my_printf {
        char option;
        void *(*ptr)(va_list);
    }my_print_t;

    void *my_print_string(va_list arg);
    int my_put_nbr(int nb);
    ssize_t my_putstr(char const *str);
    int my_strlen(char const *str);
    void my_putchar(char c);
    my_print_t *tab_init_basic(void);
    void *my_print_int(va_list arg);
    void *my_print_char(va_list arg);
    void *my_print_nothing(va_list arg);
    void *my_print_mod(va_list arg);
    void *my_print_hex_low(va_list arg);
    void *my_print_hex_up(va_list arg);
    void *my_print_octale(va_list arg);
    void *my_print_adress(va_list arg);
    void *my_print_binary(va_list arg);
    void *my_print_unsigned_int(va_list arg);
    char *my_strcpy(char *dest, char const *src);
    void *my_print_string_backslash(va_list arg);
    char *my_revstr(char *str);
    void print_octal(char c);
    void my_free(int n, ...);

#endif /* !MY_PRINTF_H_ */
