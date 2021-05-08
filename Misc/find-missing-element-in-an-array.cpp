#include<stdio.h>
#include<iostream>

using namespace std;

void findMissing(int n, int A[])
{
    for(int i = 0; i < n - 1; i++)
    {
        if (A[i]+1 != A[i+1] && i + 1 <= n - 2) {
            printf("%d is missing", A[i] + 1);
        }
    }
}

int main()
{
    int i, n = 100, A[n-1] = {0};
    int low, mid, high, k = 1;

    // generate n elements
    for(i = 0; i < n - 1; i++)
    {
        if (i == 54)
        {
            k++;
        }

        A[i] = k++;
    }

    findMissing(n, A);
}
