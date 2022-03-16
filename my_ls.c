/*
** EPITECH PROJECT, 2020
** my_ls.c
** File description:
** my ls
*/

#include "./includes/bsprintf.h"

void my_ls(char *filepath)
{
    DIR *file = opendir(filepath);
    struct dirent *dir;

    while((dir = readdir(file))) {
        if (dir->d_name[0] != '.') {
            my_printf("%s ", dir->d_name);
        }
    }
    my_printf("\n");
    closedir(file);
}

int main(int ar, char **av)
{
    if (ar == 1) {
        my_ls(".");
    }
    if (ar == 2 && av[1][0] != '-') {
        my_ls(av[1]);
    } else {
        return (84);
    }
}
