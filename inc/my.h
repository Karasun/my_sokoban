/*
** EPITECH PROJECT, 2018
** PSU_my_sokoban_2018
** File description:
** __DESCRIPTION__
*/

#ifndef MY_H_
# define MY_H_

#include <curses.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int ac, char **av);
void    display_help(void);
void    my_putchar(char c);
void    my_putstr(char *str);
int my_strlen(char *str);
char    *take_map(int ac, char **av);
int ssize_line(char *map);
char    *str_cat(char *part_line, char *full_line);
int pos_p(char *map);
void    move_right(char *map, int ppos);
void    move_left(char *map, int ppos);
void    move_up(char *map, int ppos, int size_line);
void    move_down(char *map, int ppos, int size_line);
int check_o(char *map);
void moved(char *map, int size_line);

#endif
