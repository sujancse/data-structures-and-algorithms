#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int i;
    int A[5] = {1, 2, 6, 2, 6};
    int largest = -1;

    for (i = 0; i < 5; i++)
    {
        if (A[i] > largest) {
            largest = A[i];
        }
    }

    int B[largest] = {0};

    //printf("%d\n", largest);


    for (int i = 0; i < 5; i++)
    {
        B[A[i]]++;
        //printf("%d\n", A[i]);
    }

    for (int i = 1; i <= largest; i++)
    {
        //printf("%d\n", i);
        if (B[i] > 1) {
            printf("%d is duplicate\n", i);
        }
    }
}
