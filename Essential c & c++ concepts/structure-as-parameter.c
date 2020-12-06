#include<stdio.h>

struct Rectangle
{
    int length;
    int breadth;
};

struct Test
{
    int A[5];
    int n;
}

void changeLength(struct Rectangle *p, int l)
{
    return p->length = l;
}

int area(struct Rectangle *r1)
{
    return r1->length * r1->breadth;
}

int main()
{
    struct Rectangle r = {10, 5};
    changeLength(&r, 20);
    printf("%d", area(&r));

    struct Test t = {{2, 4, 6, 8, 10}, 5};
}
