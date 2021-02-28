#include<iostream>
#include<stdio.h>

using namespace std;

 int F[10];

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
    if (n<=1)
        return n;

    return fib(n-1) + fib(n-2);
}

int fib_memoization(int n)
{
    for(int i = 0; i < 10; i++) {
        F[i] = -1;
    }

    if (n<=1) {
        F[n] = n;
        return n;
    } else {
        if (F[n-2] == -1)
            F[n-2] = fib(n-2);

        if (F[n-1] == -1)
            F[n-1] = fib(n-1);

        return F[n-2] + F[n-1];
    }
}

int main()
{
    printf("%d \n", fib_iterative(3));
    printf("%d \n", fib(3));
    printf("%d \n", fib_memoization(3));
}
