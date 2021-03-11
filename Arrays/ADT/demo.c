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

void Insert(struct Array *arr, int index, int x)
{
    if (index >= 0 && index <= arr->length)
        for(int i = arr->length; i > index; i--)
            arr->A[i] = arr->A[i-1];

        arr->A[index] = x;
        arr->length++;
}

void Delete(struct Array *arr, int index)
{
    if (index >= 0 && index <= arr->length)
        for (int i = index; i < arr->length - 1; i++)
            arr->A[i] = arr->A[i+1];
        arr->length--;
}

int main()
{
    struct Array arr = {{1, 2, 3, 4}, 10, 4};

    //Insert(&arr, 2, 5);

    //Append(&arr, 10);

    Delete(&arr, 0);

    Display(arr);

    return 0;
}
