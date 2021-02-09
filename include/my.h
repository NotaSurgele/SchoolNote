/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** MY_H
*/

#ifndef MY_H
#define MY_H

    #define ERROR   84
    #define SUCCESS 0
    #define GET_TYPE(var) _Generic((var), char**:"char **", default:"unknown")
    #define UNUSED __attribute__((unused))
    #include "my_printf.h"
    #include "my_printf_format.h"

    char **change_in_tab(char *WHERE, char **to_change, char *new);
    char **append_to_tab(char **to_append, char *to_add);
    char **remove_from_tab(char **to_remove, char *WHERE);
    void my_free_array(char **array);
    void *my_realloc(void *ptr, size_t length);
    char *my_memset(void *s, char data, size_t n);
    void my_putchar(char c);
    char *my_strstr(char *str, char const *to_find);
    int my_isneg(int nb);
    int my_strcmp(char const *s1, char const *s2);
    int my_put_nbr(int nb);
    int get_size_array(char **array);
    int my_strncmp(char const *s1, char const *s2, int n);
    void my_swap(int *a, int *b);
    char *my_strupcase(char *str);
    char *my_strlowcase(char *str);
    int my_strlen(char const *str);
    char *my_strdup(char const *str);
    char *my_strcapitalize(char *str);
    int my_getnbr(char const *str);
    int my_str_isalpha(char const *str);
    void my_sort_int_array(int *tab, int size);
    int my_str_isnum(char const *str);
    int my_compute_power_rec(int nb, int power);
    int my_str_islower(char const *str);
    int my_compute_square_root(int nb);
    int my_str_isupper(char const *str);
    int my_is_prime(int nb);
    int my_str_isprintable(char const *str);
    int my_find_prime_sup(int nb);
    int my_showstr(char const *str);
    char *my_strcpy(char *dest, char const *src);
    int my_showmem(char const *str, int size);
    char *my_strncpy(char *dest, char const *src, int n);
    char *my_strcat(char *dest, char const *src);
    char *my_revstr(char *str);
    int my_show_word_array(char * const *str);
    char *concat_params(int argc, char **argv);
    char **my_str_to_word_array(char const *str);
    int check_alpha(char c);
    int nb_words(char const *str);
    void *my_memcpy(void *dest, const void *src, size_t nbytes);
    int word_len(char const *str, int k);
    int over_max(int nb);
    char *my_strncat(char *dest, char const *src, int nb);
    void my_puterror(char c);
    void my_error_disp(char const *str);
    void my_printf(char *str, ...);
    char *my_itoa(long long nb);
    void my_free(int n, ...);

#endif /* !MY_H */