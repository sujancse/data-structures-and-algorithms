#include<stdio.h>
#include<stdlib.h>

struct Array
{
    int *A;
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

    for (i = 0; i < arr->length; i++)
    {
        if (arr->A[i] == x)
        {
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

    while (h >= l)
    {
        mid = (l+h)/2;

        if (key == arr.A[mid])
        {
            return mid;
        }
        else if (key < arr.A[mid])
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    return -1;
}

int Get(struct Array arr, int index)
{
    if (index >= 0 && index <= arr.length)
        return arr.A[index];

    return -1;
}

void Set(struct Array *arr, int index, int x)
{
    if (index >=0 && index <=  arr->length)
    {
        arr->A[index] = x;
    }
}

int Max(struct Array arr)
{
    int max = arr.A[0];

    for (int i = 0; i < arr.length; i++)
    {
        if (max < arr.A[i])
            max = arr.A[i];
    }

    return max;
}

int Min(struct Array arr)
{
    int min = arr.A[0];

    for (int i = 0; i < arr.length; i++)
    {
        if (min > arr.A[i])
            min = arr.A[i];
    }

    return min;
}

int Sum(struct Array arr)
{
    int sum = 0;
    for (int i = 0; i < arr.length; i++)
    {
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

    for (i = arr->length - 1, j = 0; i>=0; i--, j++)
    {
        B[j] = arr->A[i];
    }

    for (i = 0; i < arr->length; i++)
    {
        arr->A[i] = B[i];
    }
}

void Reverse2(struct Array *arr)
{
    int i,j;

    for (i=0,j=arr->length - 1; i < j; i++, j--)
    {
        Swap(&arr->A[i], &arr->A[j]);
    }
}

void InsertInSortedArray(struct Array *arr, int x)
{
    int i;
    i = arr->length - 1;
    while (arr->A[i] > x)
    {
        arr->A[i+1] = arr->A[i];
        i--;
    }

    arr->A[i+1] = x;
}

int IsSorted(struct Array arr, int n)
{
    int i;

    for (i = 0; i < n-1; i++)
    {
        if (arr.A[i] > arr.A[i+1])
            return 0;
    }

    return 1;
}

void Rearrange(struct Array *arr)
{
    int i, j;
    i = 0;
    j = arr->length - 1;

    while (i<j)
    {
        while (arr->A[i] < 0)
            i++;
        while (arr->A[j] >= 0)
            j--;

        if (i<j)
        {
            Swap(&arr->A[i], &arr->A[j]);
        }
    }
}

struct Array * Merge(struct Array arr1, struct Array arr2)
{
    int i = 0, j = 0, k = 0;

    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));

    while (i < arr1.length && j < arr2.length)
    {
        if (arr1.A[i] < arr2.A[j])
        {
            arr3->A[k++] = arr1.A[i++];
        }
        else
        {
            arr3->A[k++] = arr2.A[j++];
        }
    }

    for(; i<arr1.length; i++)
    {
        arr3->A[k++] = arr1.A[i];
    }

    for(; j<arr2.length; j++)
    {
        arr3->A[k++] = arr2.A[j];
    }

    arr3->length = arr1.length + arr2.length;
    arr3->size = 10;

    return arr3;
}

struct Array * Merge2(struct Array arr1, struct Array arr2)
{
    int i, j, k;
    i = j = k = 0;

    struct Array *arr3 = (struct Array*)malloc(sizeof(struct Array));

    while (i < arr1.length && j < arr2.length)
    {
        if (arr1.A[i] < arr2.A[j])
        {
            arr3->A[k++] = arr1.A[i++];
        }
        else
        {
            arr3->A[k++] = arr2.A[j++];
        }
    }

    // for the rest of arr1
    for(; i<arr1.length; i++)
    {
        arr3->A[k++] = arr1.A[i];
    }

    // for the rest of arr2
    for(; j<arr2.length; j++)
    {
        arr3->A[k++] = arr2.A[j];
    }

    arr3->length = arr1.length + arr2.length;
    arr3->size = 10;

    return arr3;
}

struct Array * Union(struct Array arr1, struct Array arr2)
{
    int i, j, k;
    i = j = k = 0;

    struct Array *arr3 = (struct Array*)malloc(sizeof(struct Array));

    while (i < arr1.length && j < arr2.length)
    {
        if (arr1.A[i] < arr2.A[j])
        {
            arr3->A[k++] = arr1.A[i++];
        }
        else if (arr1.A[i] > arr2.A[j])
        {
            arr3->A[k++] = arr2.A[j++];
        }
        else if (arr1.A[i] == arr2.A[j])
        {
            arr3->A[k++] = arr1.A[i++];
            j++;
        }
    }

    // for the rest of arr1
    for(; i<arr1.length; i++)
    {
        arr3->A[k++] = arr1.A[i];
    }

    // for the rest of arr2
    for(; j<arr2.length; j++)
    {
        arr3->A[k++] = arr2.A[j];
    }

    arr3->length = k;
    arr3->size = 10;

    return arr3;
}

struct Array * Intersection(struct Array arr1, struct Array arr2)
{
    int i, j, k;
    i = j = k = 0;

    struct Array *arr3 = (struct Array*)malloc(sizeof(struct Array));

    while (i < arr1.length && j < arr2.length)
    {
        if (arr1.A[i] < arr2.A[j])
        {
            i++;
        }
        else if (arr1.A[i] > arr2.A[j])
        {
            j++;
        }
        else if (arr1.A[i] == arr2.A[j])
        {
            arr3->A[k++] = arr1.A[i++];
            j++;
        }
    }

    arr3->length = k;
    arr3->size = 10;

    return arr3;
}

struct Array * Difference(struct Array arr1, struct Array arr2)
{
    int i, j, k;
    i = j = k = 0;

    struct Array *arr3 = (struct Array*)malloc(sizeof(struct Array));

    while (i < arr1.length && j < arr2.length)
    {
        if (arr1.A[i] < arr2.A[j])
        {
            arr3->A[k++] = arr1.A[i++];
        }
        else if (arr1.A[i] > arr2.A[j])
        {
            j++;
        }
        else if (arr1.A[i] == arr2.A[j])
        {
            i++;
            j++;
        }
    }

    // for the rest of arr1
    for(; i<arr1.length; i++)
    {
        arr3->A[k++] = arr1.A[i];
    }

    arr3->length = k;
    arr3->size = 10;

    return arr3;
}

int main()
{
    int ch, x, index;

    struct Array arr;

    printf("Please enter array size: ");
    scanf("%d", &arr.size);
    arr.A = (int *)malloc(arr.size*sizeof(int));
    arr.length = arr.size;

    do
    {

        printf("1. Insert \n");
        printf("2. Delete \n");
        printf("3. Sum \n");
        printf("4. Display \n");
        printf("5. Exit \n");

        printf("Please enter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
        case 1:
            printf("Please enter value: ");
            scanf("%d", &x);
            printf("Please enter index: ");
            scanf("%d", &index);
            Insert(&arr, index, x);
            break;
        case 4:
            Display(arr);
            break;
        }
    }
    while(ch < 5);

    //struct Array arr = {{2, -3, 9, -10}, 10, 4};

    //struct Array arr1 = {{2, 3, 6, 8}, 10, 4};
    //struct Array arr2 = {{1, 3, 5, 6}, 10, 4};

    //struct Array *arr3;

    //arr3 = Union(arr1, arr2);
    //arr3 = Intersection(arr1, arr2);
    //arr3 = Difference(arr1, arr2);

    //Display(*arr3);

    //arr3 = Merge(arr1, arr2);

    //Display(*arr3);

    //Rearrange(&arr);

    //printf("%d \n", IsSorted(arr, 4));

    //InsertInSortedArray(&arr, 5);

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

    //arr3 = Merge2(arr1, arr2);

    //Display(arr);

    return 0;
}
