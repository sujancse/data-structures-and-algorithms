#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    char A[] = "SUJAN", B[7], t;
    int i, j;

    for (i = 0; A[i] != '\0'; i++);

    i = i - 1;

    for(j = 0; j < i; i--, j++) {
        t = A[j];
        A[j] = A[i];
        A[i] = t;
    }

    printf("%s\n", A);

    for (i = 0; A[i] != '\0'; i++);

    i = i - 1;

    for(j = 0; i >= 0; j++, i--) {
        B[j] = A[i];
    }

    B[j] = '\0';

    printf("%s", B);


}
