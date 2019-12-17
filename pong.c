/*
** EPITECH PROJECT, 2019
** pong.c
** File description:
** 101 Pong
*/

#include <math.h>
#include <stdio.h>

float my_velocity(float vect1, float vect2)
{
    float result;
    
    result = vect2 - vect1;
    return (result);
}

void my_incidence(float *vect1, float *vect2)
{
    double result;
    double ract_1;
    double ract_2;
    float scal_p;
    float x;
    float y;
    float z;

    x = vect2[0] - vect1[0];
    y = vect2[1] - vect1[1];
    z = vect2[2] - vect1[2];
    ract_1 = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
    ract_2 = sqrt(pow(x, 2) + pow(y, 2));
    scal_p = (x * x + y * y);
    if (scal_p != 0) {
        result = acos(scal_p / (ract_1 * ract_2)) * (180 / M_PI);
        if (result < 0) {
            result = result * (-1);
        } else {
            printf("The incidence angle is:\n%.2f degrees", result);
        }
    } else {
        printf("The ball won't reach the paddle.\n");
    }
}

void pong(float *vect1, float *vect2, int n)
{
    float tmp[4];
    float cord1;
    float cord2;
    float cord3;

    printf("The velocity vector of the ball is:\n");
    tmp[0] = my_velocity(vect1[0], vect2[0]);
    tmp[1] = my_velocity(vect1[1], vect2[1]);
    tmp[2] = my_velocity(vect1[2], vect2[2]);
    printf("(%.2f, %.2f, %.2f)\n",tmp[0],tmp[1],tmp[2]);
    printf("At time t + %d, ball coordinates will be:\n",n);
    cord1 = (tmp[0] * n + vect2[0]);
    cord2 = (tmp[1] * n + vect2[1]);
    cord3 = (tmp[2] * n + vect2[2]);
    printf("(%.2f, %.2f, %.2f)\n", cord1,cord2,cord3);
    if (vect2[2] >= 0 && cord3 <= 0) {
        my_incidence(vect1, vect2);
    } else {
        printf("The ball won't reach the paddle.\n");
    }
}
