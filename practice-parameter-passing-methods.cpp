#include<iostream>

using namespace std;

// Call by value
int add(int a, int b) // formal parameter
{
    int c;
    c = a + b;
    return c;
}

// call by address
void swap(int *a, int *b) // formal parameter
{
    int temp;
    temp = *a; // de-referencing
    *a = *b;
    *b = temp;
}

void swapByReference(int &a, int &b) // aliasing the actual variable
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int num1 = 10, num2 = 15;

    cout << "Sum is: " << add(num1, num2) << endl;

    swap(&num1, &num2);

    cout << "Num 1: " << num1 << endl;
    cout << "Num 2: " << num2 << endl;

    cout << "Swap Again" << endl;
    swapByReference(num1, num2);

    cout << "Num 1: " << num1 << endl;
    cout << "Num 2: " << num2 << endl;

    return 0;
}
