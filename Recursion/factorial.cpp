#include<iostream>
#include<stdio.h>

using namespace std;

int fact(int n)
{
    if(n == 0)
        return 1;
    return fact(n-1) * n;
}

int main()
{
    int s = 0;
    s = fact(5);
    printf("%d", s);
    return 0;
}
