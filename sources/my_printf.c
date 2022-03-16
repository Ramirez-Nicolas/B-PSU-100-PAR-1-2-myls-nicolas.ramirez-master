/*
** EPITECH PROJECT, 2020
** my_printf.c
** File description:
** printf
*/

#include <stdarg.h>
#include "../includes/bsprintf.h"
#include <unistd.h>
#include <stdio.h>

void my_printf3(va_list parameters, int i, char *s, ...)
{
    if (s[i] == 'i' || s[i] == 'd') {
        my_put_nbr(va_arg(parameters, int));
    }
    if (s[i] == 'u') {
        unsigned_my_put_nbr(va_arg(parameters, int));
    }
    if (s[i] == 'o') {
        decimal_to_octal(va_arg(parameters, int));
    }
    if (s[i] == '%') {
        my_putchar('%');
    }
    if (s[i] == '+') {
        my_putchar('%');
        my_putchar(s[i]);
        i++;
    }
}

void my_printf2(va_list parameters, int i, char *s, ...)
{
    if (s[i] == 'c') {
        my_putchar(va_arg(parameters, int));
    }
    if (s[i] == 's') {
        my_putstr(va_arg(parameters, char *));
    } else my_printf3(parameters, i, s);
}

void my_printf(char *s, ...)
{
    va_list parameters;
    int i = 0;

    va_start(parameters, s);
    while (s[i] != '\0') {
        if (s[i] != '%') {
            my_putchar(s[i]);
            i++;
        }
        if (s[i] == '%') {
            i++;
            my_printf2(parameters, i, s);
            i++;
        }
        va_end(parameters);
    }
}
