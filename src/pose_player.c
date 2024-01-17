/*
** EPITECH PROJECT, 2018
** PSU_my_sokoban_2018
** File description:
** __DESCRIPTION__
*/

#include "../inc/my.h"

int pos_p(char *map)
{
    int i = 0;

    while (map[i] != 'P' && map[i] != '\0')
        i++;
    return (i);
}

void    move_right(char *map, int ppos)
{
    if (map[ppos + 1] == 'X' && map[ppos + 2] != '#') {
        map[ppos] = ' ';
        map[ppos + 1] = 'P';
        map[ppos + 2] = 'X';
    }
    if (map[ppos + 1] != '#') {
        map[ppos] = ' ';
        map[ppos + 1] = 'P';
    }
}

void    move_left(char *map, int ppos)
{
    if (map[ppos - 1] == 'X' && map[ppos - 2] != '#') {
        map[ppos] = ' ';
        map[ppos - 1] = 'P';
        map[ppos - 2] = 'X';
    }
    if (map[ppos - 1] != '#') {
        map[ppos] = ' ';
        map[ppos - 1] = 'P';
    }
}

void    move_up(char *map, int ppos, int size_line)
{
    if (map[ppos - size_line - 1] == 'X' && map[ppos - size_line - 2] != '#') {
        map[ppos] = ' ';
        map[ppos - size_line - 1] = 'P';
        map[ppos - size_line - size_line - 2] = 'X';
    }
    if (map[ppos - size_line - 1] != '#') {
        map[ppos] = ' ';
        map[ppos - size_line - 1] = 'P';
    }
}

void    move_down(char *map, int ppos, int size_line)
{
    if (map[ppos + size_line + 1] == 'X' && map[ppos + size_line + 2] != '#') {
        map[ppos] = ' ';
        map[ppos + size_line + 1] = 'P';
        map[ppos + size_line + size_line + 2] = 'X';
    }
    if (map[ppos + size_line + 1] != '#') {
        map[ppos] = ' ';
        map[ppos + size_line + 1] = 'P';
    }
}
