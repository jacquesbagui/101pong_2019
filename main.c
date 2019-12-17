/*
** EPITECH PROJECT, 2019
** main
** File description:
** Pong Main
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

void pong(float *vect1, float *vect2, int n);
int my_str_isnum(char *str);

int main(int argc, char **argv)
{
    float vect1[4];
    float vect2[4];
    int n;
    int i = 0;
    int j = 0;

    if (argc == 0 || argc < 8 || argc > 8) {
        printf("error arg");
        return (84);
    } else if (argc == 8) {
        while (argv[7][j++] != '\0') {
            if (argv[7][j] == '.') {
                printf("error n");
                return (84);
            }
        }
        n = atoi(argv[7]);
        if (n > 0) {
            while (i != 4) {
                if (my_str_isnum(argv[i + 1]) == 0) {
                    printf("Argument is not a number\n");
                    return (84);
                }
                if (my_str_isnum(argv[i + 4]) == 0) {
                    printf("Argument is not a number\n");
                    return (84);
                }
                vect1[i] = atof(argv[i + 1]);
                vect2[i] = atof(argv[i + 4]);
                i++;
            }
        } else {
            printf("error n");
            return (84);
        }
        pong(vect1, vect2, n);
    }
    return (0);
}