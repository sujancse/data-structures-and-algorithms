#include<stdio.h>

int x = 0;
int fun(int n)
{
//    int static x = 0;

    if(n>0) {
        x++;
        return fun(n-1) + x;
    }

    return 0;
}

int main()
{
    int a = 5;
    printf("%d", fun(a));

    return 0;
}
