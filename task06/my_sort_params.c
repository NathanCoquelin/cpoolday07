/*
** EPITECH PROJECT, 2022
** my_sort_params
** File description:
** This will sort the arguments of the
** script and order them
*/

#include "my.h"

void display_values(char * array[], int size, int addresses[])
{
    for (int i = 0; i < size; i++) {
        my_putstr(array[addresses[i]]);
        my_putchar('\n');
    }
}

int main(int argc, char *argv[])
{
    unsigned int count = 0;
    int array_addresses[argc];
    int temp;
    int cmp;

    for (int i = 0; i < argc; i++) {
        array_addresses[i] = i;
    }
    while (count + 1 < argc) {
        cmp = my_strcmp(argv[array_addresses[count + 1]],
        argv[array_addresses[count]]);
        if (cmp < 0) {
            my_swap(array_addresses + count + 1, array_addresses + count);
            count = -1;
        }
        count++;
    }
    display_values(argv, argc, array_addresses);
    return 0;
}
