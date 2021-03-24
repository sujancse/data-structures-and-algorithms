#include<stdio.h>

struct Array {
    int A[10];
    int size;
    int length;
};

void Swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

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

int LinearSearch(struct Array *arr, int x)
{
    int i;

    for (i = 0; i < arr->length; i++) {
        if (arr->A[i] == x) {
            //swap(&arr->A[i], &arr->A[i-1]);
            return i;
        }
    }

    return -1;
}

int BinarySearch(struct Array arr, int key)
{
    int mid;
    int l = 0;
    int h = arr.length - 1;

    while (h >= l) {
        mid = (l+h)/2;

        if (key == arr.A[mid]) {
            return mid;
        } else if (key < arr.A[mid]) {
            h = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    return -1;
}

int Get(struct Array arr, int index) {
    if (index >= 0 && index <= arr.length)
        return arr.A[index];

    return -1;
}

void Set(struct Array *arr, int index, int x)
{
    if (index >=0 && index <=  arr->length) {
        arr->A[index] = x;
    }
}

int Max(struct Array arr)
{
    int max = arr.A[0];

    for (int i = 0; i < arr.length; i++) {
        if (max < arr.A[i])
            max = arr.A[i];
    }

    return max;
}

int Min(struct Array arr)
{
    int min = arr.A[0];

    for (int i = 0; i < arr.length; i++) {
        if (min > arr.A[i])
            min = arr.A[i];
    }

    return min;
}

int Sum(struct Array arr)
{
    int sum = 0;
    for (int i = 0; i < arr.length; i++) {
        sum += arr.A[i];
    }

    return sum;
}

int RSum(struct Array arr, int n)
{
    if (n == 0)
        return arr.A[0];
    return RSum(arr, n-1) + arr.A[n];
}

int Avg(struct Array arr)
{
    return (float) Sum(arr)/arr.length;
}

void Reverse(struct Array *arr)
{
    int i, j;
    int *B;

    B = (int *)malloc(arr->length*sizeof(int));

    for (i = arr->length - 1, j = 0; i>=0; i--, j++) {
        B[j] = arr->A[i];
    }

    for (i = 0; i < arr->length; i++) {
        arr->A[i] = B[i];
    }
}

void Reverse2(struct Array *arr)
{
    int i,j;

    for (i=0,j=arr->length - 1; i < j; i++, j--) {
        Swap(&arr->A[i], &arr->A[j]);
    }
}

void InsertInSortedArray(struct Array *arr, int x)
{
    int i;
    i = arr->length - 1;
    while (arr->A[i] > x) {
        arr->A[i+1] = arr->A[i];
        i--;
    }

    arr->A[i+1] = x;
}

int main()
{
    struct Array arr = {{2, 3, 9, 10}, 10, 4};

    InsertInSortedArray(&arr, 5);

    //Reverse2(&arr);

    //Reverse(&arr);

    //printf("%d \n", Avg(arr));

    //printf("%d \n", RSum(arr, 3));

    //printf("%d \n", Sum(arr));

    //printf("%d \n", Min(arr));

    //printf("%d \n", Max(arr));

    //printf("%d \n", Get(arr, 2));

    //Insert(&arr, 2, 5);

    //Append(&arr, 10);

    //Delete(&arr, 0);

    //printf("%d \n", LinearSearch(&arr, 3));

    //printf("%d", BinarySearch(arr, 4));

    Display(arr);

    return 0;
}
