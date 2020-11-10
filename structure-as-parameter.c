#include<stdio.h>

struct Rectangle
{
    int length;
    int breadth;
};

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
}
