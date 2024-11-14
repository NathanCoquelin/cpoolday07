/*
** EPITECH PROJECT, 2022
** my_strncat
** File description:
** This will concatenate two strings starting from n of the source file
*/

#include "my.h"

char * my_strncat(char *dest, const char *src, int nb)
{
    unsigned int dest_len = my_strlen(dest);
    unsigned int i;

    for (i = 0 ; i < nb && src[i] != '\0' ; i++)
        dest[dest_len + i] = src[i];
    dest[dest_len + i] = '\0';

    return dest;
}
