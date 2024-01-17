/*
** EPITECH PROJECT, 2018
** PSU_my_sokoban_2018
** File description:
** __DESCRIPTION__
*/

#include "../inc/my.h"

void moved(char *map, int size_line)
{
    unsigned char move = 0;

    move = getch();
    if (move == 67)
        move_right(map, pos_p(map));
    if (move == 68)
        move_left(map, pos_p(map));
    if (move == 65)
        move_up(map, pos_p(map), size_line);
    if (move == 66)
        move_down(map, pos_p(map), size_line);
}

int main(int ac, char **av)
{
    char *map = take_map(ac, av);
    int size_line = ssize_line(map);

    if (ac == 2) {
        if (av[1] && av[1][1] && av[1][0] &&
            av[1][0] == '-' && av[1][1] == 'h') {
            display_help();
            return (0);
        } else {
            initscr();
            refresh();
            noecho();
            curs_set(FALSE);
            while (check_o(map) != 0) {
                printw("%s", map);
                moved(map, size_line);
                clear();
            }
	    endwin();
        }
        return (0);
    }
    return (84);
}
