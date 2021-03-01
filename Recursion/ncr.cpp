#include<iostream>
#include<stdio.h>

using namespace std;

int fact(int n)
{
    if(n==0)
        return 1;

    return fact(n-1)*n;
}

int nCr(int n, int r)
{
    int fact_n, fact_r, fact_n_r;

    fact_n = fact(n);
    fact_r = fact(r);
    fact_n_r = fact(n-r);

    return fact_n/(fact_r*fact_n_r);
}

int nCr_pascals_formula(int n, int r)
{
    if(r==0 || n==r)
        return 1;

    return nCr_pascals_formula(n-1, r-1) + nCr_pascals_formula(n-1, r);
}

int main()
{
    printf("%d \n", nCr(4,2));
    printf("%d \n", nCr_pascals_formula(5,2));
}
