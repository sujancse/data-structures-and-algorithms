#include<iostream>
#include<stdio.h>

using namespace std;

int fib_iterative(int n)
{
    int t0 = 0, t1 = 1, s, i;

    if(n<=0)
        return s;

    for(i = 2; i <= n; i++){
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }

    return s;
}

int main()
{
    printf("%d \n", fib_iterative(3));
}
