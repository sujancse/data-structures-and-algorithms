#include<stdio.h>

struct Array {
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;

    for(i = 0; i < arr.length; i++)
        printf("%d \n", arr.A[i]);
}

void Append(struct Array *arr, int x)
{
    if (arr->length < arr->size)
        arr->A[arr->length++] = x;
}

int main()
{
    struct Array arr = {{1, 2, 3, 4}, 10, 4};

    Append(&arr, 10);

    Display(arr);

    return 0;
}
