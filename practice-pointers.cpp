#include<iostream>

// Needed for prinf
#include<stdio.h>

// Needed for malloc
#include<stdlib.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    // Plain array
//    int a;
//    cout << "Enter a: ";
//    cin >> a;
//
//    int *ap;
//    ap =&a;
//    cout << a << endl;

    // Pointer to an array
//    int A[5] = {2, 4, 6, 8, 10};
//    int *p;
//    p = A;
//
//    for(int i = 0; i < 5; i++)
//    {
//        cout << p[i] << endl;
//    }

    // Allocating array in heap memory
    int *p;

    // c language way
//    p = (int *)malloc(5*sizeof(int));

    // cpp way
    p = new int[5];

    p[0] = 1;
    p[1] = 3;
    p[2] = 4;
    p[3] = 5;
    p[4] = 10;

    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << endl;
    }

    // release memory in heap, c way
//    delete []p;

    // release memory in cpp way
    free(p);

    // Every type of pointer takes 8 bytes
    int *p1;
    float *p2;
    char *p3;
    struct Rectangle *p4;

    cout << sizeof(p1) << endl;
    cout << sizeof(p2) << endl;
    cout << sizeof(p3) << endl;
    cout << sizeof(p4) << endl;

    return 0;
}
