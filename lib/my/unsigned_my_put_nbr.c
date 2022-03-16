/*
** EPITECH PROJECT, 2020
** unsigned_my_put_nbr.c
** File description:
** integer decimal unsigned 
*/

#include "../../includes/bsprintf.h"
#include <unistd.h>

int unsigned_my_put_nbr(unsigned int nb)
{
    
    if (nb <= 9)
        my_putchar(nb + 48);
    else if (nb > 9) {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    }
    return (0);
}
