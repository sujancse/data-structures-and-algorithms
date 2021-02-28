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

int fib(int n)
{
    if (n<=0)
        return n;

    return fib(n-1) + fib(n-2);
}

int main()
{
    printf("%d \n", fib_iterative(3));
    printf("%d \n", fib(3));
}
