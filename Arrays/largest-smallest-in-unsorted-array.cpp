#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int A[] = {1, 10, 4, 2, 5, 20, 9, 3};
    int smallest = 200;
    int largest = -1;

    for (int i = 0; i < 8; i++)
    {
        if (A[i] > largest) {
            largest = A[i];
        }

        if (A[i] < smallest) {
            smallest = A[i];
        }
    }

    cout << "Largest: " << largest << endl;
    cout << "Smallest: " << smallest;
}
