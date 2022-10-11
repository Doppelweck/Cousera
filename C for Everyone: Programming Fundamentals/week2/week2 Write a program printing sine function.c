/*
Peer-graded Assignment: Write a program that prints the sine function for an input x between (0, 1)

Write a program that can give the sine of a value between 0 and 1 (non inclusive). 
You will be graded based on whether the program can output a value in the correct range 
and whether your code is well-formatted and logically correct.
*/

#include <stdio.h>
#include <math.h>
#define PI 3.14159
#define FREQUENZY 1
int main(void)
{
    double sinus; //Sine value for given time
    double t;     //Time Value of sine

    printf("Enter a time between 0 and 1 for get the value oaf a sine at that time:");
    scanf("%lf", &t);

    //Check if t is in range
    if (t < 0)
    {
        t = 0;
    }
    else if (t > 1)
    {
        t = 1;
    }

    //calculate the sine value
    sinus = sin(2 * PI * FREQUENZY * t);

    //print the sine value
    printf("The Value of sin(2*pi*1*t) is  %lf for a given t of %lf  \n\n", sinus, t);
    return 0;
}
