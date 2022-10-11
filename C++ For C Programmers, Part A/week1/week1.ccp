
// Peer-graded Assignment: Homework 1: Convert a C program to C++
//
// Convert this program to C++
// change to C++ io
// change to one line comments
// change defines of constants to const
// change array to vector<>
// inline any short function
//
//#include <stdio.h>
//
//#define N 40
//
// void sum(int *p, int n, int d[])
// {
//     int i;
//     *p = 0;
//     for (i = 0; i < n; ++i)
//         *p = *p + d[i];
// }
// int main()
// {
//     int i;
//     int accum = 0;
//     int data[N];
//     for (i = 0; i < N; ++i)
//         data[i] = i;
//     sum(&accum, N, data);
//     printf("sum is %d\n", accum);
//     return 0;
// }

#include <iostream>
#include <vector>

inline void sum(int *p, int n, std::vector<int> d)
{
    int i;
    *p = 0;
    for (i = 0; i < n; ++i)
        *p = *p + d.at(i);
}

int main()
{
    const int N = 40; //Number of vector elemtns
    int i;
    int accum = 0; //sum of all vector elemtns
    std::vector<int> data(N); //Create vector of lenght N

    for (i = 0; i < N; ++i)
        data.at(i) = i; //write numbers 0-N into the vector at the positions 0-N 

    sum(&accum, N, data); //calculate the sum of all elements in data

    std::cout << "sum is " << accum << "\n"; //print out the sum of all elements

    return 0;
}
