/*
** EPITECH PROJECT, 2018
** PSU_my_sokoban_2018
** File description:
** __DESCRIPTION__
*/

#include "../inc/my.h"

char    *take_map(int ac, char **av)
{
    FILE *fp;
    char *line = NULL;
    size_t len = 0;
    ssize_t read;
    char *load_map;

    load_map = malloc(sizeof(char));
    load_map[0] = 0;
    fp = fopen(av[1], "r");
    if (fp == NULL)
        exit(84);
    while ((read = getline(&line, &len, fp)) != -1) {
        load_map = str_cat(load_map, line);
    }
    free (line);
    return (load_map);
}

int ssize_line(char *map)
{
    int line = 0;

    while (map[line] != '\n' && map[line] != '\0')
        line++;
    return (line);
}

char    *str_cat(char *part_line, char *full_line)
{
    char *rep;
    int i = 0;
    int j = 0;

    rep = malloc(sizeof(char)*(my_strlen(part_line) + my_strlen(full_line) + 1));
    while (part_line[i] != '\0') {
        rep[i] = part_line[i];
        i++;
    }
    while (full_line[j] != '\0') {
        rep[i] = full_line[j];
        i++;
        j++;
    }
    rep[i] = '\0';
    return (rep);
}
