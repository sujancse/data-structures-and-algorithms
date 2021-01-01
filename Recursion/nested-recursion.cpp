#include<iostream>
#include<stdio.h>

using namespace std;

int fun(int n)
{
    if(n > 100) {
        return n - 10;
    } else {
        fun(fun(n + 11));
    }
}

int main()
{
    int x;
    x = fun(95);
    printf("%d", x);
}
