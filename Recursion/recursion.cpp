#include<iostream>
#include<stdio.h>

using namespace std;

void fun(int n)
{
    if (n > 0) {
        printf("%d", n);
        fun(n-1);
    }
}

void fun1(int n)
{
    if (n > 0) {
        fun1(n-1);
        printf("%d", n);
    }
}

int main()
{
    int x = 3;
    fun(x);
    printf("\n");
    fun1(x);
    return 0;
}
