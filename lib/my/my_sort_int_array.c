/*
** EPITECH PROJECT, 2020
** my_sort_int_array
** File description:
** sort an integer array
*/

void my_swap(int *a, int *b);

void my_sort_int_array(int *array, int size)
{
    int i = 0;

    while (i < size) {
        if (array[i + 1] < array[i]) {
            my_swap(&array[i + 1], &array[i]);
            i = - 1;
        }
        i++;
    }
    return;
}