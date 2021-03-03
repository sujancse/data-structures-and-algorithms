#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int A[5];
    int B[5] = {0};
    int C[5] = {1, 2, 3, 4, 5};
    int D[5] = {2, 3};
    int E[] = {1, 2, 3, 4, 5, 6};

    printf("%d \n", C[2]);
    printf("%d \n", 3[C]);

    for(int i = 0; i < 6; i++) {
        printf("%u \n", &E[i]);
    }


    return 0;
}
