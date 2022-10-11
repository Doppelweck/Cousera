/**
 * @file week5.c
 * @brief General file for week5 Peer-graded Assignment.
 * 
 * Compute the average weight for a population of elephant seals read into an array.
 * The average value will be updated for each new measurment. The Data.txt File has to be in the 
 * same directory as the outpufile of the program (week5).
 * 
 * After compiling use
 *      ./week5 < Data.txt
 * to call the program and pipe the Data.txt file into it.
 *
 * @author Sebastian Friedrich
 * @date Sep 12 2022
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int data; //Current Value read out in Data.txt
    double average; //Average of all read out data points
    int n = 1;  //Number of Elements read out in Data.txt

    /*Read the data out of the Data.txt File that contains the elephant_seal_data. 
    * Each entry is read out individually using scanf(). The Data.txt File has to be in the 
    * same directory as the outpufile of the program (week5). The average value will be 
    * updated for each new value read from the Data.txt file. 
    */
   /* while (scanf("%d", &data) == 1)
    {
        //Calculate the average value in recursive form for each new value
        average = ((double)n - 1) / (double)n * average + ((double)data / (double)n);

        //Print out the current No. of measurment, the current value read from the data and the 
        //current average calculated by the current and all previously captured values
        printf("Measurment: %d   Current Measurment Value: %d     Current Average: %lf   \n", n, data, average);

        n++;
    }*/
    printf("The Average weight of all %d measurments is %lf  \n", n-1,average);
    return 0;
}
