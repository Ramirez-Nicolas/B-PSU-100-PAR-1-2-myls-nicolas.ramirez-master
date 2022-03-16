/*
** EPITECH PROJECT, 2020
** my_putchar.c
** File description:
** display
*/

#include <unistd.h>
#include "../../includes/bsprintf.h"

void my_putchar(char c)
{
    write (1,&c,1);
}
