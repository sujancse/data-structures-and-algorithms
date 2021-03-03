#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int A[5];
    int *P;
    int *Q;

    P = new int[5]; // c++ allocate memory in heap
    Q = (int *)malloc(5 * sizeof(int)); // c allocate memory in heap

    A[0] = 10;
    P[0] = 20;
    Q[0] = 30;

    printf("%d \n", A[0]);
    printf("%d \n", P[0]);
    printf("%d \n", Q[0]);

    delete []P;
    free(Q);


    return 0;
}
