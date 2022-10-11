/*
Peer-graded Assignment: Write a function that prints a table of values for sine and cosine between (0, 1)

Write a C program that has a function that prints a table of values for sine and cosine between (0, 1).
*/

#include <stdio.h>
#include <math.h> /* has  sin(), abs(), and fabs() */

#define PI 3.14159
#define FREQUENZY 1 //Frequenzy of sin and cos function
#define NO_TIME_INTERVAL 200 //Number of time steps for sin and cos function

int main(void)
{
    double sinus, cosin;
    double w = 2 * PI * FREQUENZY; // angular frequency "omega"
    double t; // current time value [0-1]
    int i;

    for (i = 0; i < NO_TIME_INTERVAL; i++)
    {
        /*Calculate sin and cos using the function sin(w*t) and cos(w*t) at a given time t, 
         * where w is the angular frequency of the sin and cos function given by w=2*PI*f;
         * f is the frequenzy of the signal. t is in the range of 0-1.
         */ 
        t = ((double)i / NO_TIME_INTERVAL); // current time value [0-1] typecast to bouble
        sinus = sin(w * t); // calculate sin value at time t
        cosin = cos(w * t); // calculate cos value at time t

        // Print values for sin(w*t) and cos(w*t)
        printf("sin(w*%lft) = % lf      ", t, fabs(sinus) );
        printf("    cos(w*%lf) = % lf \n", t, fabs(cosin) );
    }
    return 0;
}

