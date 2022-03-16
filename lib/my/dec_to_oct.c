/*
** EPITECH PROJECT, 2020
** dec_to_oct.c
** File description:
** decimal to octal
*/

#include "../../includes/bsprintf.h"

void decimal_to_octal(int nb)
{
    int i = 1;
    int oct = 0;

    if (nb < 0)
        nb = nb * -1;
    while (nb != 0) {
        oct = oct + (nb % 8) * i;
        nb = nb / 8;
        i = i * 10;
    }
    my_put_nbr(oct);
}
