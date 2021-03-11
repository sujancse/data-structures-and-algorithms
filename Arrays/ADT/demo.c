#include<stdio.h>

struct Array {
    int A[30];
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;

    for(i = 0; i < 4; i++)
        printf("%d \n", arr.A[i]);
}

int main()
{
    struct Array arr = {{1, 2, 3, 4}, 30, 4};

    Display(arr);

    return 0;
}
