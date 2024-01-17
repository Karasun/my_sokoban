/*
** EPITECH PROJECT, 2018
** PSU_my_sokoban_2018
** File description:
** __DESCRIPTION__
*/

#include "../inc/my.h"

void    display_help(void)
{
    my_putstr("USAGE\n");
    my_putstr("\t./my_sokoban map\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("\tmap file representing the warehouse map, ");
    my_putstr("containing '#' for walls, \n\t\t'P' for the player, ");
    my_putstr("'X' for boxes and 'O' for storage locations\n");
}

void    my_putchar(char c)
{
    write(1, &c, 1);
}

void    my_putstr(char *str)
{
    for (int i = 0; str[i]; i++)
        my_putchar(str[i]);
}

int my_strlen(char *str)
{
    int i;

    for (i = 0; str[i]; i++);
    return (i);
}

int check_o(char *map)
{
    int i = 0;
    int j = 0;

    while (map[i] != '\0') {
        if (map[i] == 'O')
            j++;
        i++;
    }
    return (j);
}
