/*
** EPITECH PROJECT, 2020
** my_strlen.c
** File description:
** count the number of char in a string
*/

#include "../../includes/bsprintf.h"

int my_strlen(char const *str)
{
    int c = 0;

    while (str[c] != '\0') {
        c = c + 1;
    }
    return (c);
}
